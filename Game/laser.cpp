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
	b_y=b_y+1;
}


int Bullet::GetX()
{
	return b_x;
}


int Bullet::GetY()
{
	return b_y;
}


char Bullet::GetSymbol()
{
	return b_symbol;
}


void Bullet::SetX(int x)
{
	b_x = x;
}


void Bullet::SetY(int y)
{
	b_y = y;
}



