#include <stdio.h>
#include "SARSA.h"


SARSA::SARSA()
{

}

SARSA::~SARSA()
{

}

ExplorationMethods SARSA::getExplorationMethod()
{
	return this->explorationMethods;
}

double SARSA::SARSACalculation(State state, State nextState, int action, float reward, float alfa, float gamma, float eGreedy)
{

	return (state.actions[action] + alfa * (reward + ((gamma * nextState.actions[this->getExplorationMethod().getActionEgreedy(nextState, eGreedy)] - state.actions[action]))));

}