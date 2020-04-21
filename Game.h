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

#ifndef BALLS_GAME_H
#define BALLS_GAME_H

#include "Player.h"

class Game {

private:
    sf::VideoMode videoMode;
    std::unique_ptr<sf::RenderWindow> window;
    sf::Event sfmlEvent{};
    bool endGame{};

    Player player;
    int points{};

    // Gui stuff
    sf::Font guiFont;
    sf::Text guiText;
    sf::Font endGameFont;
    sf::Text endGameText;

    // Balls
    std::vector<Ball> balls;
    float spawnTimerMax{};
    float spawnTimer{};
    int maxBalls{};

    // Private Methods
    void initVariables();
    void initWindow();
    void initFonts();
    void initText();

public:
    // Constructor and Destructors
    Game();
    ~Game();

    // Methods
    [[nodiscard]] bool running() const;
    void pollEvents();

    void spawnBalls();
    static int randomiseBallType() ;

    void updatePlayer();
    void updateCollision();
    void updateGui();
    void update();
    void renderGui(sf::RenderTarget& target);
    void render();
};


#endif //BALLS_GAME_H
