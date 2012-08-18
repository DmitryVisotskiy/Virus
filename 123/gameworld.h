#ifndef gameworld_h
#define gameworld_h
#include<vector>
#include"enemies.h"

class GameWorld
{
	public:
		GameWorld();
		void NewEnemy();
		void MoveAndUpdate();
		void gw_Draw();

	public:
		int static const h = 2;
		int static const w = 20;

	private:
		std::vector<std::vector<char> > table;
		std::vector< Enemy > enemies;	
};


#endif
