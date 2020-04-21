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

#include "Player.h"


// Private Methods -----------------------------------------------------------------------------------------------------
void Player::initVariables()
{
    this->velocity = 5.F;
    this->hpMax = 10;
    this->hp = hpMax;
}
// ---------------------------------------------------------------------------------------------------------------------
void Player::initShape()
{
    this->shape.setFillColor(sf::Color::Green);
    this->shape.setSize(sf::Vector2f(100.F, 100.F));
}
// Constructor ---------------------------------------------------------------------------------------------------------
Player::Player(float x, float y)
{
    this->shape.setPosition(x, y); // Set the players initial position

    this->initVariables();

    this->initShape();
}
// Methods -------------------------------------------------------------------------------------------------------------
void Player::updateInput()
{
    // Keyboard input
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) // Left
    {
        this->shape.move(-this->velocity, 0.F);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) // Right
    {
        this->shape.move(this->velocity, 0.F);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) // Up
    {
        this->shape.move(0.F, -this->velocity);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) // Down
    {
        this->shape.move(0.F, this->velocity);
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Player::updateWindowBoundsCollision(const sf::RenderTarget& target)
{

    /* @return void
     * - Checks if players shape has left the screen
     * - Places players shape back into window bounds
     */

    if (this->shape.getGlobalBounds().left <= 0.F) // Left
    {
        this->shape.setPosition(0.F, this->shape.getGlobalBounds().top);
    }
    else if (this->shape.getGlobalBounds().left + this->shape.getGlobalBounds().width >= target.getSize().x) // Right
    {
        this->shape.setPosition(target.getSize().x - this->shape.getGlobalBounds().width, this->shape.getGlobalBounds().top);
    }
    if (this->shape.getGlobalBounds().top <= 0.F) // Top
    {
        this->shape.setPosition(this->shape.getGlobalBounds().left, 0.F);
    }
    else if (this->shape.getGlobalBounds().top + this->shape.getGlobalBounds().height >= target.getSize().y) // Bottom
    {
        this->shape.setPosition(this->shape.getGlobalBounds().left, target.getSize().y - this->shape.getGlobalBounds().height);
    }

}
// ---------------------------------------------------------------------------------------------------------------------
void Player::update(const sf::RenderTarget& target)
{
    // Window bounds collisions
    this->updateWindowBoundsCollision(target);

    // Update player input
    this->updateInput();
}
// ---------------------------------------------------------------------------------------------------------------------
void Player::render(sf::RenderTarget& target)
{
    /* @return void
     * Renders the sfml rectangle shape of the player
     * to the target/window.
     * */

    target.draw(this->shape);
}
// ---------------------------------------------------------------------------------------------------------------------
const sf::RectangleShape &Player::getShape() const
{
    /* @return sf::RectangleShape&
     * Returns the sfml rectangle shape of the player.
     * */

    return this->shape;
}
// ---------------------------------------------------------------------------------------------------------------------
const int &Player::getHp() const
{
    /* @return int&
     * Returns hp of player.
     * */

    return this->hp;
}
// ---------------------------------------------------------------------------------------------------------------------
const int &Player::getHpMax() const
{
    /* @return int&
     * Returns hpMax of the player.
     * */

    return this->hpMax;
}
// ---------------------------------------------------------------------------------------------------------------------
void Player::takeDamage(const int damage)
{
    /* @return void
     * - Sets hp damage to player.
     * - If hp goes below 0, sets hp back to 0
     *   for display purposes.
     * */

    if (this->hp > 0)
    {
        this->hp -= damage;
    }

    if (this->hp < 0)
    {
        this->hp = 0;
    }
}
// ---------------------------------------------------------------------------------------------------------------------
void Player::gainHealth(const int healthGain)
{
    /* @return void
     * - Sets hp gain to player.
     * - If hp goes above hpMax, sets hp back to hpMax
     *   for display purposes.
     * */

    if (this->hp < this->hpMax)
    {
        this->hp += healthGain;
    }

    if (this->hp > this->hpMax)
    {
        this->hp = this->hpMax;
    }
}
// ---------------------------------------------------------------------------------------------------------------------

