#ifndef laser_h
#define laser_h

#include<vector>


class Bullet
{
	public:
		Bullet( int x, int y );
		void Move();	
		void Die();
	private:
		Bullet();

	private: 
		int b_x;
		int b_y;
		char b_symbol;
};

class Laser
{
	public:
		Bullet * BulletShot( int x, int y );
};

#endif
