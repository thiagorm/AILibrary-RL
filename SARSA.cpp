#include <stdio.h>
#include "SARSA.h"

SARSA::SARSA()
{

}

SARSA::~SARSA()
{

}

void SARSA::Agent_Initialization(float alpha, float gamma, float eGreedy)
{
	this->rlParameters.setAlpha(alpha);
	this->rlParameters.setGamma(gamma);
	this->rlParameters.setEgreedy(eGreedy);
}
	
void SARSA::Agent_Initialization(float alpha, float gamma, float eGreedy, float lambda)
{
	this->rlParameters.setAlpha(alpha);
	this->rlParameters.setGamma(gamma);
	this->rlParameters.setEgreedy(eGreedy);
	this->rlParameters.setLambda(lambda);
}

ExplorationMethods SARSA::Agent_Exploration()
{
	return this->explorationMethods;
}

double SARSA::Agent_LearningCalculation(State state, State nextState, int action, float reward)
{

	return (state.actions[action] + this->rlParameters.getAlpha() * (reward + ((this->rlParameters.getGamma() * nextState.actions[this->Agent_Exploration().getActionEgreedy(nextState, this->rlParameters)] - state.actions[action]))));

}