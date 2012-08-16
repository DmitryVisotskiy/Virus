#include"gameworld.h"
#include"enemies.h"
#include<vector>
#include<iostream>

int h=20;
int w=50;
	
GameWorld::GameWorld()
{
	std::vector<char> vector;
	for(int i=0;i<w;i++)
		vector.push_back('.');
	for(int i=0;i<h;i++)
	{
		table.push_back(vector);
	};
};

void GameWorld::gw_Draw()
{
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			std::cout<<table[i][j];
		}
		std::cout<<std::endl;
	}
};

