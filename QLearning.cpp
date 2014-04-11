#include <stdio.h>
#include "QLearning.h"


QLearning::QLearning()
{

}

QLearning::~QLearning()
{

}


ExplorationMethods QLearning::Agent_Exploration()
{
	return this->explorationMethods;
}

void QLearning::Agent_Initialization(float alpha, float gamma, float eGreedy)
{
	this->rlParameters.setAlpha(alpha);
	this->rlParameters.setGamma(gamma);
	this->rlParameters.setEgreedy(eGreedy);
}
	
void QLearning::Agent_Initialization(float alpha, float gamma, float eGreedy, float lambda)
{
	this->rlParameters.setAlpha(alpha);
	this->rlParameters.setGamma(gamma);
	this->rlParameters.setEgreedy(eGreedy);
	this->rlParameters.setLambda(lambda);
}

double QLearning::Agent_LearningCalculation(State state, State nextState, int action, float reward)
{
	return (state.actions[action] + this->rlParameters.getAlpha() * (reward + ((this->rlParameters.getGamma() * verifyMaxValue(nextState)) - state.actions[action])));
}

double QLearning::verifyMaxValue(State state)
{
	double maior = 0;
	int i = 0;
	
	maior = state.actions[0];
	
	for(i = 1; i < state.getNumberActions(); i++)
	{
		if(state.actions[i] > maior)
		{
			maior = state.actions[i];
		}
	}
	
	return maior;
}