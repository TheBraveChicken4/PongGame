#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>


/*
*This will be the setup class for each game to run. When a player first starts the game this class will be created
*/
class Setup {
private:
	sf::RectangleShape player1;
	sf::RectangleShape player2;

public:
	sf::RectangleShape getPlayer1();
	sf::RectangleShape getPlayer2();
	Setup(sf::Vector2f size = sf::Vector2f(80.0, 10));
	

};
