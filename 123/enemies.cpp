#include"enemies.h"

Enemy::Enemy(int x, int y)
{
	e_x = x;
	e_y = y;
	e_health = 1;
	e_symbol = 'O';
}

int Enemy::GetX()
{
	return e_x;
}

int Enemy::GetY()
{
	return e_y;
}

void Enemy::Move()
{
e_y=e_y+1;
}
