#include"enemies.h"
#include"laser.h"


Enemy::Enemy(int x, int y)
{
	e_x = x;
	e_y = y;
	e_health = 1;
	e_symbol = 'V';
	e_laser = new Laser();
}


int Enemy::GetX()
{
	return e_x;
}


int Enemy::GetY()
{
	return e_y;
}


char Enemy::GetSymbol()
{
	return e_symbol;
}


void Enemy::SetX(int x)
{
	e_x = x;
}


void Enemy::SetY(float y)
{
	e_y = y;
}


void Enemy::Move()
{
	e_y=e_y+0.5;
}


Bullet * Enemy::Fire()
{
	return e_laser->BulletShot( e_x, e_y + 1);
}




