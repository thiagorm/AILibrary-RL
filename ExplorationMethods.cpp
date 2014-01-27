#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ExplorationMethods.h"

ExplorationMethods::ExplorationMethods()
{

}

ExplorationMethods::~ExplorationMethods()
{

}

int ExplorationMethods::verifyMaxAction(State state)
{
	int i = 0;
	float maior = 0;
	int action = 0;
	int countMax = 0;
	int *numberActions;
	bool boolean = false;

	numberActions = (int *) malloc(state.getNumberActions() * sizeof(int));
	
	maior = state.actions[0];
	numberActions[countMax] = action;

	for(i = 1; i < state.getNumberActions(); i++)
	{
		if(state.actions[i] > maior)
		{
			maior = state.actions[i];
			action = i;
			countMax = 0;
			numberActions[countMax] = action;
			boolean = false;
		}
		else if(state.actions[i] == maior)
		{
			countMax++;
			action = i;
			numberActions[countMax] = action;
			boolean = true;
		}
	}

	countMax++;

	if(boolean)
	{
		int randomIndex = ((rand()%countMax));
		action = numberActions[randomIndex];
	}

	numberActions = NULL;

	return action;
}

int ExplorationMethods::getActionEgreedy(State state, float eGreedy)
{
	float random_eGreedy = 0;
	int random_action;
	int action = NULL;
	
	random_eGreedy = (float) rand()/(float)RAND_MAX;

	if(eGreedy > random_eGreedy)
	{
		//chosing the random action
		action = ((rand()%state.getNumberActions()));
	}
	else
	{
		//chosing the max action
		action = verifyMaxAction(state);
	}
	
	return action;
}