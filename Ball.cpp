//
//      Created by Goodecheeseburgers on 20/04/2020.
//      CollectaBalls. A C++ / SFML Game with collectaballs.
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

    // Set a random rgb color
    sf::Color color(rand() % 255 +1, rand() % 255 + 1, rand() % 255 + 1);
    this->shape.setFillColor(color);

    this->shape.setPosition(
            sf::Vector2f(
                    static_cast<float >(rand() % window.getSize().x - this->shape.getGlobalBounds().width),
                    static_cast<float >(rand() % window.getSize().y - this->shape.getGlobalBounds().height)
                    ));
}
// Constructor ---------------------------------------------------------------------------------------------------------
Ball::Ball(const sf::RenderWindow& window)
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
    target.draw(this->shape);
}
// ---------------------------------------------------------------------------------------------------------------------
