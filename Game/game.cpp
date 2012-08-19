#include"gameworld.h"
#include"enemies.h"
#include<iostream>
int main()
{
GameWorld GameWorld1;

for(int i=0;i<100 ;i++)
{
	GameWorld1.NewEnemy();
}
GameWorld1.StartGame();



return 0;
};
