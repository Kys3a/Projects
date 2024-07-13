#include "game.h"
#include <stdio.h>


void gameManager(void)
{

   int pX = 1;
   int pY = 1;

char GameArea[MAX_I][MAX_J];
int *playerI = &pX;
int *playerJ = &pY;


}

void initArea(gameArea[][MAX_J], int *playerI, int *playerJ){
	int i;
	int j;
	
	for(i = 0, i < MAX_I, i++)
		for(j = 0, j < MAX_J, j++)
			if(i == 0 || i == MAX_I - 1 || j == 0 || j == MAX_J - 1)
				gameArea[i][j] = '0';
			else 
				gameArea[i][j] = 'T';
	gameArea[*playerI][*playerJ] = 'T';

}

void 
