#include "Setup.h"

Setup::Setup(sf::Vector2f size) {
    player1 = sf::RectangleShape(size);
    player1.setPosition(1300, 800);
    player1.rotate(90.0);
    player2 = sf::RectangleShape(size);
    player2.setPosition(100, 800);
    player2.rotate(90.0);
}

sf::RectangleShape Setup::getPlayer1()
{
    return Setup::player1;
}

sf::RectangleShape Setup::getPlayer2()
{
    return Setup::player2;
}
