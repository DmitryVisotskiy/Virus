#include"gameworld.h"
#include"enemies.h"
#include<vector>
#include<iostream>

int h=20;
int w=50;
	
GameWorld::GameWorld()
{
// Создание игрового поля
	std::vector<char> vector;
	for(int i=0;i<w;i++)
		vector.push_back('.');
	for(int i=0;i<h;i++)
	{
		table.push_back(vector);
	}
// Создание врагов
	char const placeOccupied = 'O';
	int x=-1;
	int y=-1;
	int i=0;
	int j=0;

	while(x!=-1 && y!=-1)	
	{	
		if (table[i][j] != placeOccupied)
		{
			x=i;
			y=j;
		}
		if (i<w-1) 
		{		
			i=i+1;
		}	
		else
		{
			i=0;
			j=j+1;
		}
	}
	
	table[x][y]=placeOccupied;
	enemies.push_back( Enemy( x, y ) );

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

