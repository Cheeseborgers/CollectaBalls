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

#ifndef BALLS_BALL_H
#define BALLS_BALL_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

#include <iostream>
#include <ctime>
#include <memory>


class Ball {

private:
    sf::CircleShape shape;

    // Private methods
    void initShape(const sf::RenderWindow& window);

public:
    // Constructor
    explicit Ball(const sf::RenderWindow& window);

    // Methods
    void update(const sf::RenderTarget& target);
    void render(sf::RenderTarget& target);

};


#endif //BALLS_BALL_H
