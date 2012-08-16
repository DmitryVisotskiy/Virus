#include"enemies.h"
extern int h, w;

Enemy::Enemy()
{
e_x=-1;
e_y=-1;
int i=e_x;
int j=e_y;
	while(e_x!=-1 && e_y!=-1)	
	{	
		i=i+1;
		j=j+1;
		if(table[i][j]==".") then
		{
			e_x=i;
			e_y=j;
		}
		
	}

	table[e_x][e_y]="V";

}
