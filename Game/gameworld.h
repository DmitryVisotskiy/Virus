#ifndef gameworld_h
#define gameworld_h
#include<vector>
#include"enemies.h"

class GameWorld
{
	public:
		GameWorld();
		void NewEnemy();
		void StartGame();
	private:
		void gw_Draw();
		void MoveAndUpdate();

	public:
		int static const time_update=500000;
		int static const h = 100;
		int static const w = 80;
		int static const gw_symbol = '.';

	private:
		std::vector<std::vector<char> > table;
		std::vector< Enemy > enemies;	
};


#endif
