#include"laser.h"

Bullet * Laser::BulletShot( int x, int y )
{
	return new Bullet( x, y );
}


Bullet::Bullet( int x, int y )
{
	b_x = x;
	b_y = y;
	b_symbol = '|';
}


void Bullet::Move()
{
	b_y=b_y+2;
}