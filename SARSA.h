#ifndef _SARSA_
#define _SARSA_

#include "ExplorationMethods.h"
#include "RLFeatures.h"
#include "State.h"

class SARSA
{

	RLFeatures rlFeatures;
	ExplorationMethods explorationMethods;

	public:

		SARSA();
		~SARSA();

		double SARSACalculation(State state, State nextState, int action, float reward, float alfa, float gamma, float eGreedy);

		ExplorationMethods getExplorationMethod();


};

#endif