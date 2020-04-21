//
//      Created by Goodecheeseburgers on 20/04/2020.
//      CollectaBalls. A C++ / SFML Game with balls.
//      Copyright (C) 2020 - goodecheeseburgers@gmail.com
//
//      https://github.com/Cheeseborgers/CollectaBalls
//
//      This program is free software: you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation, either version 3 of the License, or
//      (at your option) any later version.
//
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//
//      You should have received a copy of the GNU General Public License
//      along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include "Game.h"


// Private Methods -----------------------------------------------------------------------------------------------------
void Game::initVariables()
{
    this->endGame = false;

    // Balls
    this->spawnTimerMax = 10.F;
    this->spawnTimer = this->spawnTimerMax;
    this->maxBalls = 10;

    // Player
    this->points = 0;
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::initWindow()
{
    this->videoMode = sf::VideoMode(800, 600); // Set video mode

    this->window = std::make_unique<sf::RenderWindow>( // Create window
            this->videoMode,
            "CollectaBalls",
            sf::Style::Titlebar | sf::Style::Close
    );

    this->window->setFramerateLimit(60); // Set framerate

    this->window->setVerticalSyncEnabled(false); // Set Vsync to false;
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::initFonts()
{
    if (!this->guiFont.loadFromFile("fonts/hemi-head/hemi_head.ttf"))
    {
        std::cout << "ERROR::GAME::INITFONT: COULD NOT LOAD hemi_head.ttf\n";
    }

    if (!this->endGameFont.loadFromFile("fonts/chlorinar/chlorinar.ttf"))
    {
        std::cout << "ERROR::GAME::INITFONT: COULD NOT LOAD chlorinar.ttf\n";
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::initText()
{
    // GUI text for score, health
    this->guiText.setFont(this->guiFont);
    this->guiText.setFillColor(sf::Color::White);
    this->guiText.setCharacterSize(32);
    this->guiText.setPosition(sf::Vector2f(0.F, 0.F));

    // Game over text
    this->endGameText.setFont(this->endGameFont);
    this->endGameText.setFillColor(sf::Color::Red);
    this->endGameText.setCharacterSize(60);
    this->endGameText.setPosition(sf::Vector2f(20.F, 300.F));
    this->endGameText.setString("You are deaded!\n Exit the game");
}
// Constructor and Destructors -----------------------------------------------------------------------------------------
Game::Game()
{
    // Set any required vars
    this->initVariables();

    // Initialise and create a window
    this->initWindow();

    this->initFonts();
    this->initText();
}
// ---------------------------------------------------------------------------------------------------------------------
Game::~Game() = default;
// Methods -------------------------------------------------------------------------------------------------------------
void Game::spawnBalls()
{
    // Timer
    if (this->spawnTimer < this->spawnTimerMax)
    {
        this->spawnTimer += 1.F;
    } else {

        if (this->balls.size() < this->maxBalls)
        {
            this->balls.emplace_back(Ball(*this->window, randomiseBallType()));

            this->spawnTimer = 0.F;
        }
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::updatePlayer()
{
    this->player.update(*this->window);

    if (this->player.getHp() <= 0)
    {
        this->endGame = true;
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::updateCollision()
{
    // Check the collision
    for (size_t i = 0; i < this->balls.size(); ++i)
    {
        if (this->player.getShape().getGlobalBounds().intersects(this->balls[i].getShape().getGlobalBounds()))
        {
            switch (this->balls[i].getType())
            {
                case BallTypes::DEFAULT:
                    this->points++;
                    break;
                case BallTypes::DAMAGING:
                    this->player.takeDamage(1);
                    break;
                case BallTypes::HEALING:
                    this->player.gainHealth(1);
                    break;
                default:
                    break;
            }

            // Add points
            this->points += 1;
            // Remove the ball
            this->balls.erase(this->balls.begin() + i);
        }
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::updateGui()
{
    std::stringstream ss;

    ss << "- Points: " << this->points << "\n"
        << "- Health: " << this->player.getHp() << " / " << this->player.getHpMax();

    this->guiText.setString(ss.str());
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::update()
{
    this->pollEvents();

    if (!this->endGame)
    {
        this->spawnBalls();

        this->updatePlayer();
        this->updateCollision();
        this->updateGui();
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::renderGui(sf::RenderTarget& target)
{
    target.draw(this->guiText);
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::render()
{
    this->window->clear(); // Clear default black

    this->player.render(*this->window); // Render player

    // Render Balls
    for (auto i : this->balls)
    {
        i.render(*this->window);
    }

    // Render gui
    this->renderGui(*this->window);

    // Render end text
    if (this->endGame)
    {
        this->window->draw(this->endGameText);
    }

    this->window->display(); // Display frame in window
}
// ---------------------------------------------------------------------------------------------------------------------
bool Game::running() const
{
    /* @return bool
     * - Returns sfml window closed bool.
     * - NOTE: removing comment in return statement will
     *   instantly close the game once player hp == 0
     * */

    return this->window->isOpen() /*&& !this->endGame*/;
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::pollEvents()
{
    while (this->window->pollEvent(this->sfmlEvent))
    {
        switch (this->sfmlEvent.type)
        {
            case sf::Event::Closed:
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if (this->sfmlEvent.key.code == sf::Keyboard::Escape)
                {
                    this->window->close();
                }
                break;
            default:
                break;

        }
    }
}
// ---------------------------------------------------------------------------------------------------------------------
int Game::randomiseBallType()
{
    int type = BallTypes::DEFAULT;

    int randValue = rand() % 100 + 1;

    if (randValue > 60 && randValue <= 80)
    {
        type = BallTypes::DAMAGING;
    }
    else if (randValue > 80 && randValue <= 100)
    {
        type = BallTypes::HEALING;
    }

    return type;
}
// ---------------------------------------------------------------------------------------------------------------------