#ifndef _ExplorationMethods_
#define _ExplorationMethods_

#include "State.h"

class ExplorationMethods
{
	public:

		ExplorationMethods();
		~ExplorationMethods();


		int verifyMaxAction(State state);
		int getActionEgreedy(State state, float eGreedy);


};


#endif