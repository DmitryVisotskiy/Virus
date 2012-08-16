#include"enemies.h"
extern int h, w;

Enemy::Enemy( int iX, int iY )
{
	e_x = iX;
	e_y = iY;
	e_health = 1;
	e_symbol = 'O';
}

