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

#ifndef BALLS_PLAYER_H
#define BALLS_PLAYER_H

#include "Ball.h"

class Player {

private:
    sf::RectangleShape shape;

    float velocity{};

    void initVariables();
    void initShape();

public:
    // Constructor
    explicit Player(float x = 0.F, float y = 0.F);

    // Methods
    void updateInput();
    void updateWindowBoundsCollision(const sf::RenderTarget& target);
    void update(const sf::RenderTarget& target);
    void render(sf::RenderTarget& target);

};

// NS END

#endif //BALLS_PLAYER_H