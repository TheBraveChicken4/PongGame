#include <iostream>
#include <SFML/Graphics.hpp>

int main()

{
	sf::VideoMode dimensions = sf::VideoMode(1400, 900);

	sf::RenderWindow window(dimensions, "Pong");

	sf::RectangleShape player1 = sf::RectangleShape(sf::Vector2f(80.0, 10.0));
	player1.rotate(90.f);
	player1.setPosition(1300, 700);

	while (window.isOpen())

	{

		sf::Event event;

		while (window.pollEvent(event))

		{

			if (event.type == sf::Event::Closed)

				window.close();

		}

		window.clear();

		window.draw(player1);

		window.display();

	}

	return 0;

}