#ifndef _ExplorationMethods_
#define _ExplorationMethods_

#include "State.h"
#include "RLParameters.h"

class ExplorationMethods
{

	public:

		ExplorationMethods();
		~ExplorationMethods();


		int verifyMaxAction(State state);
		int getActionEgreedy(State state, RLParameters rlParameters);


};


#endif