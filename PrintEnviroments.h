#ifndef _PrintEnviroments_
#define _PrintEnviroments_

#include "GlobalVariables.h"
#include "State.h"

class PrintEnviroments
{

	int x, y, i, j; 
	int flag_x, flag_y;

	public:

		PrintEnviroments();
		~PrintEnviroments();


		void gotoxy(int x, int y);
		void print(State grid[][C]);


};


#endif