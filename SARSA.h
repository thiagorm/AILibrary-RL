#ifndef _SARSA_
#define _SARSA_

#include "ExplorationMethods.h"
//#include "RLFeatures.h"
#include "RLParameters.h"
#include "State.h"

class SARSA
{

	//RLFeatures rlFeatures;
	ExplorationMethods explorationMethods;

	public:
		RLParameters rlParameters;

		SARSA();
		~SARSA();

		void Agent_Initialization(float alpha, float gamma, float eGreedy);
		void Agent_Initialization(float alpha, float gamma, float eGreedy, float lambda);

		double Agent_LearningCalculation(State state, State nextState, int action, float reward);

		ExplorationMethods Agent_Exploration();


};

#endif