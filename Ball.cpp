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


#include "Ball.h"


// Private methods -----------------------------------------------------------------------------------------------------
void Ball::initShape(const sf::RenderWindow& window)
{
    // Set a random radius
    this->shape.setRadius(static_cast<float>(rand() % 10 + 10));

    sf::Color color;
    switch (this->type)
    {
        case DEFAULT:
            color = sf::Color(rand() % 255 +1, rand() % 255 + 1, rand() % 255 + 1);
            break;
        case DAMAGING:
            color = sf::Color::Red;
            this->shape.setOutlineColor(sf::Color::White);
            this->shape.setOutlineThickness(2.F);
            break;
        case HEALING:
            color = sf::Color::Green;
            this->shape.setOutlineColor(sf::Color::White);
            this->shape.setOutlineThickness(2.F);
            break;
        default:
            break;
    }

    this->shape.setFillColor(color);

    this->shape.setPosition(
            sf::Vector2f(
                    static_cast<float >(rand() % window.getSize().x - this->shape.getGlobalBounds().width),
                    static_cast<float >(rand() % window.getSize().y - this->shape.getGlobalBounds().height)
                    ));
}
// Constructor ---------------------------------------------------------------------------------------------------------
Ball::Ball(const sf::RenderWindow& window, int type)
    : type(type)
{
    this->initShape(window);
}
// Methods--------------------------------------------------------------------------------------------------------------
void Ball::update(const sf::RenderTarget &target)
{

}
// ---------------------------------------------------------------------------------------------------------------------
void Ball::render(sf::RenderTarget &target)
{
    /* @return void
     * Renders the sfml circle shape of a the ball
     * to the target/window
     * */

    target.draw(this->shape);
}

const sf::CircleShape &Ball::getShape() const
{
    /* @return sf::CircleShape&
     * Returns the sfml circle shape of the ball
     * */

    return this->shape;
}

const int &Ball::getType() const
{
    return this->type;
}
// ---------------------------------------------------------------------------------------------------------------------
