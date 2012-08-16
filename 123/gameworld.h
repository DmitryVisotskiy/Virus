#ifndef gameworld.h
#define gameworld.h
#include<vector>
#include<enemies.h>

class GameWorld
{
	public:
		GameWorld();
		void gw_Draw();
	private:
		std::vector<std::vector<char> > table;
		std::vector< Enemy > enemies;	
};


#endif
