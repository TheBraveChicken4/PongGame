#include <iostream>
#include <SFML/Graphics.hpp>
#include "Setup.h"


int main()

{
	// Initial setup variables and instantiate the game class
	sf::VideoMode dimensions = sf::VideoMode(1400, 900);

	sf::RenderWindow window(dimensions, "Pong");

	Setup game(sf::Vector2f(80.0, 10.0));

	/*
	* Main game loop ensuring everything runs smoothly
	*/

	while (window.isOpen())

	{

		sf::Event event;

		// Closes the window when the X is pressed
		while (window.pollEvent(event))

		{

			if (event.type == sf::Event::Closed)

				window.close();

		}

		// Rendering the window and accessing private variables in the game object to render players
		window.clear();

		window.draw(game.getPlayer1());
		window.draw(game.getPlayer2());

		window.display();

	}

	return 0;

}