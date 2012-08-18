#include"gameworld.h"
#include"enemies.h"
#include<vector>
#include<iostream>


	
GameWorld::GameWorld()
{ 
	std::vector<char> vector;
	for(int i=0;i<w;i++)
		vector.push_back('.');
	for(int i=0;i<h;i++)
	{
		table.push_back(vector);
	}
};



void GameWorld::NewEnemy()
{
	int i;
	int j;
	if(enemies.size()<h*w)
	{		
		if(enemies.size()==0)
		{
			i=0;
			j=0;
		}
		else
		{
			if(enemies.back().GetX()<w-1)
			{
				i=enemies.back().GetX()+1;
				j=enemies.back().GetY();
			}
			else
			{
				i=0;
				j=enemies.back().GetY()+1;			
			}
		}
	}
	enemies.push_back( Enemy( i, j ) );
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



void GameWorld::MoveAndUpdate()
{
	for(int j=0;j<enemies.size();j++)
	{
		enemies[j].Move();
	}
	GameWorld::gw_Draw();

};










