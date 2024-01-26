#include <iostream>
#include <SFML/Graphics.hpp>

int main()

{
	sf::VideoMode dimensions = sf::VideoMode(600, 600);

	sf::RenderWindow window(dimensions, "Pong");

	sf::CircleShape shape(100.f);

	shape.setFillColor(sf::Color::Cyan);

	while (window.isOpen())

	{

		sf::Event event;

		while (window.pollEvent(event))

		{

			if (event.type == sf::Event::Closed)

				window.close();

		}

		window.clear();

		window.draw(shape);

		window.display();

	}

	return 0;

}