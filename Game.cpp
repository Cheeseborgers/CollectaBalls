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
    this->spawnTimerMax = 10.F;
    this->spawnTimer = this->spawnTimerMax;
    this->maxBalls = 10;
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::initWindow()
{
    this->videoMode = sf::VideoMode(800, 600); // Set video mode

    this->window = std::make_unique<sf::RenderWindow>( // Create window
            this->videoMode,
            "Balls",
            sf::Style::Titlebar | sf::Style::Close
    );

    this->window->setFramerateLimit(60); // Set framerate

    this->window->setVerticalSyncEnabled(false); // Set Vsync to false;
}
// Constructor and Destructors -----------------------------------------------------------------------------------------
Game::Game()
{
    // Set any required vars
    this->initVariables();

    // Initialise and create a window
    this->initWindow();
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
            this->balls.emplace_back(Ball(*this->window));

            this->spawnTimer = 0.F;
        }
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Game::update()
{
    this->pollEvents();

    this->spawnBalls();

    // Update player
    this->player.update(*this->window);
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

    this->window->display(); // Display frame in window
}
// ---------------------------------------------------------------------------------------------------------------------
bool Game::running() const
{
    return this->window->isOpen();
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




