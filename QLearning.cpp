#include <stdio.h>
#include "QLearning.h"


QLearning::QLearning()
{

}

QLearning::~QLearning()
{

}


ExplorationMethods QLearning::getExplorationMethod()
{
	return this->explorationMethods;
}


double QLearning::QLearningCalculation(State state, State nextState, int action, float reward, float alfa, float gamma)
{
	return (state.actions[action] + alfa * (reward + ((gamma * rlFeatures.verifyMaxValue(nextState)) - state.actions[action])));
}