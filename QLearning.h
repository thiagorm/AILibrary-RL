#ifndef _QLearning_
#define _QLearning_

#include "ExplorationMethods.h"
#include "GlobalVariables.h"
//#include "RLFeatures.h"
#include "RLParameters.h"
#include "State.h"

class QLearning
{

	//RLFeatures rlFeatures;
	ExplorationMethods explorationMethods;

	public:

		RLParameters rlParameters;
		 QLearning();
		~QLearning();

		void Agent_Initialization(float alpha, float gamma, float eGreedy);
		void Agent_Initialization(float alpha, float gamma, float eGreedy, float lambda);

		double Agent_LearningCalculation(State state, State nextState, int action, float reward);

		ExplorationMethods Agent_Exploration();

		double verifyMaxValue(State state);

};

#endif