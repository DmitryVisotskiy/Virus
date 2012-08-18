#include"gameworld.h"
#include"enemies.h"
#include<iostream>
int main()
{
GameWorld GameWorld1;

for(int i=0;i<20;i++)
{
	GameWorld1.NewEnemy();
}

GameWorld1.gw_Draw();
for(int i=0;i<GameWorld::h;i++)
{
	GameWorld1.MoveAndUpdate();
	usleep(500000);
	i=i+1;
}



return 0;
};
