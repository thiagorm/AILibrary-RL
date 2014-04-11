#include "QLearningElegibilityTraces.h"

QLearningElegibilityTraces::QLearningElegibilityTraces()
{

}

QLearningElegibilityTraces::~QLearningElegibilityTraces()
{

}

double QLearningElegibilityTraces::QLearningETCalculation(State state, State nextState, int action, float reward, float gamma, float alfa, float lambda, float eGreedy, int nexti, int nextj)
{
//	this->nextAction = explorationMethods.getActionEgreedy(state);

	this->elegibilityTracesFeatures.setAStar(state, nextAction);

	return 0;
}

ExplorationMethods QLearningElegibilityTraces::getExplorationMethod()
{
	return this->explorationMethods;
}