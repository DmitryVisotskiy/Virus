#ifndef gameworld.h
#define gameworld.h
#include<vector>

class GameWorld
{
	public:
		GameWorld();
		void gw_Draw();
	private:
		std::vector<std::vector<char> > table;	
};


#endif
