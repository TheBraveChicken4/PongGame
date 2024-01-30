#include <iostream>
#include <SFML/Graphics.hpp>
#include <map>
#include "Setup.h"


/*
* This is a testing phase and nothing is done yet
*/





int main()

{
	// Initial setup variables and instantiate the game class
	sf::VideoMode dimensions = sf::VideoMode(1400, 900);

	sf::RenderWindow window(dimensions, "Pong");

	Setup game(sf::Vector2f(80.0, 10.0));


	//Add color scheme for the background of the game
	std::map<std::string, sf::Color> color_schemes;
	color_schemes["Demon"] = sf::Color(255, 0, 0, 1);
	color_schemes["Toothpaste"] = sf::Color(0, 255, 255, 1);
	std::string index = "Demon";

	/*
	* Main game loop ensuring everything runs smoothly
	*/

	while (window.isOpen())

	{
		/*
		* Create color schemes in a hash map
		*/

		sf::Event event;

		// Closes the window when the X is pressed
		while (window.pollEvent(event))

		{

			if (event.type == sf::Event::Closed)

				window.close();

			if (event.type == sf::Keyboard::C) {
				index = "Toothpaste";
			}

		}

		// Rendering the window and accessing private variables in the game object to render players
		window.clear(color_schemes[index]);

		window.draw(game.getPlayer1());
		window.draw(game.getPlayer2());
		//window.draw(pongText);

		window.display();

	}

	return 1;

}