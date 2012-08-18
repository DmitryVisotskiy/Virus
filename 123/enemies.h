#ifndef enemies_h
#define enemies_h
#include<vector>

class Enemy
{
	public:
		Enemy( int x, int y );
		void Move();
		void Die();
		void Apear();
		int GetX();
		int GetY();
	private:
		Enemy() {};
		int e_health;
		int e_x;
		int e_y;
		int e_symbol;
};
#endif
