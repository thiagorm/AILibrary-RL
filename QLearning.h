#ifndef _QLearning_
#define _QLearning_

#include "ExplorationMethods.h"
#include "GlobalVariables.h"
#include "RLFeatures.h"
#include "State.h"

class QLearning
{

	RLFeatures rlFeatures;
	ExplorationMethods explorationMethods;

	public:

		 QLearning();
		~QLearning();

		double QLearningCalculation(State state, State nextState, int action, float reward, float alfa, float gamma);

		ExplorationMethods getExplorationMethod();



};

#endif