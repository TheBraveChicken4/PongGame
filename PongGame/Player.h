#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

class Player {
private:
	Vector2f player_pos;
	RectangleShape player_shape;


public:

	Player(float starting_x, float starting_y);
	RectangleShape getShape();
	

};
