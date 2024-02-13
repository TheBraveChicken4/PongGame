#include "Player.h"


Player::Player(float starting_x, float starting_y)
{
	player_pos.x = starting_x;
	player_pos.y = starting_y;
	player_shape.setSize(Vector2f(80, 10));
	player_shape.setPosition(player_pos);
	player_shape.rotate(90);

}

RectangleShape Player::getShape()
{
	return player_shape;
}
