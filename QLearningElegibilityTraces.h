#ifndef _QLearningElegibilityTraces_
#define _QLearningElegibilityTraces_

#include "ElegibilityTracesFeatures.h"
#include "ExplorationMethods.h"
#include "GlobalVariables.h"
#include "RLFeatures.h"
#include "State.h"


class QLearningElegibilityTraces
{

	RLFeatures rlFeatures;
	ExplorationMethods explorationMethods;

	ElegibilityTracesFeatures elegibilityTracesFeatures;

	double max_a;
	int nextAction;

	public:

		QLearningElegibilityTraces();
		~QLearningElegibilityTraces();

		double QLearningETCalculation(State state, State nextState, int action, float reward, float gamma, float alfa, float lambda, float eGreedy, int nexti, int nextj);

		ExplorationMethods getExplorationMethod();

};

#endif