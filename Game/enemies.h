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
		void SetX(int x);
		void SetY(int y);
		int GetX();
		int GetY();
		char GetSymbol();
	private:
		Enemy() {};
		int e_health;
		int e_x;
		int e_y;
		int e_symbol;
};
#endif
