#include <windows.h>
#include <iostream>

#include "PrintEnviroments.h"

using namespace std;

PrintEnviroments::PrintEnviroments()
{

	this->x = 0;
	this->y = 0;
	this->i = 0;
	this->j = 0;
	this->flag_x = 0;
	this->flag_y = 0;
}

PrintEnviroments::~PrintEnviroments()
{
	this->x = NULL;
	this->y = NULL;
	this->i = NULL;
	this->j = NULL;
	this->flag_x = NULL;
	this->flag_y = NULL;
}

void PrintEnviroments::gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x; coord.Y = y;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hStdOut, coord);
}

void PrintEnviroments::print(State grid[][C])
{
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			if(j == (C-1))
			{
				flag_y += 6;
				flag_x = 0;
				gotoxy(x,y);
				//getch();
				printf("%.4f", grid[i][j].actions[0]);
				y += 1;
				gotoxy(x,y);
				printf("%.4f", grid[i][j].actions[1]);
				y += 1;
				gotoxy(x,y);
				printf("%.4f", grid[i][j].actions[2]);
				y += 1;
				gotoxy(x,y);
				printf("%.4f", grid[i][j].actions[3]);
				printf("  ");
				//getch();
				x = flag_x;
				y = flag_y;
			}
			else
			{
				gotoxy(x,y);
				//getch();
				printf("%.4f", grid[i][j].actions[0]);
				y += 1;
				gotoxy(x,y);
				printf("%.4f", grid[i][j].actions[1]);
				y += 1;
				gotoxy(x,y);
				printf("%.4f", grid[i][j].actions[2]);
				y += 1;
				gotoxy(x,y);
				printf("%.4f", grid[i][j].actions[3]);
				printf("  ");
				//getch();
				x += 8;
				y = flag_y;
			}
		}
	}

	flag_y += 6;
	flag_x = 0;

	x = flag_x;
	y = flag_y;

	gotoxy(x,y);
	
	
	cout << "********************************************************************\n";
	cout << "********************************************************************\n";
}