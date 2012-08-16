#ifndef enemies.h
#define enemies.h
#include<vector>

class Enemy
{
	public:
		Enemy( int iX, int iY );
		void Move();
		void Die();
		void Apeqr();
	private:
		Enemy() {};
		int e_health;
		int e_x;
		int e_y;
		int e_symbol;
};
#endif
