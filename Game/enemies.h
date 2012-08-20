#ifndef enemies_h
#define enemies_h

#include"laser.h"

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
		Bullet * Fire();
	private:
		Enemy() {};
		int e_health;
		int e_x;
		int e_y;
		char e_symbol;
		Laser * e_laser;
};
#endif
