#ifndef gameworld_h
#define gameworld_h

#include"enemies.h"
#include"laser.h"

#include<vector>

class GameWorld
{
	public:
		GameWorld();
		void NewEnemy();
		void StartGame();
	private:
		void gw_Draw();
		void Update();

	public:
		int static const time_update=500000;
		int static const h = 40;
		int static const w = 100;

	private:
		std::vector<std::vector<char> > table;
		std::vector< Enemy > enemies;	
		std::vector< Bullet *> bullets;
		char gw_symbol;	
};


#endif
