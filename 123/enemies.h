#ifndef enemies.h
#define enemies.h
#include<vector>

class Enemy
{
	public:
		Enemy();
		void Move();
		void Die();
		void Apeqr();
	private:
		int e_health;
		int e_x;
		int e_y;
		int e_face;
};
#endif
