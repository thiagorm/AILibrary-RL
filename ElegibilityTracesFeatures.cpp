#include <stdio.h>
#include "ElegibilityTracesFeatures.h"


ElegibilityTracesFeatures::ElegibilityTracesFeatures()
{
	this->delta = 0;
	this->AStar = 0;
	this->i = 0;
	this->j = 0;
	this->k = 0;
}

ElegibilityTracesFeatures::~ElegibilityTracesFeatures()
{
	this->delta = NULL;
	this->AStar = NULL;
	this->i = NULL;
	this->j = NULL;
	this->k = NULL;
}

bool ElegibilityTracesFeatures::verifyAStar(int nextAction)
{
	if(nextAction == AStar)
	{
		return true;
	}
	else
		return false;
}

double ElegibilityTracesFeatures::calculateDelta(float reward, float gamma, float nextQValue, float QValue)
{
	this->delta = reward + ((gamma * nextQValue) - QValue);

	return 0;
}

void ElegibilityTracesFeatures::setZ(int i, int j, int action)
{
	Z[i][j].actions[action] += 1;
}

void ElegibilityTracesFeatures::initializeZ()
{
	for(int i = 0; i < 0; i++)
	{
		for(int j = 0; j < 0; j++)
		{
			this->Z[i][j] = 0;
		}
	}
}

void ElegibilityTracesFeatures::calculateZ(State grid[][C], float alpha, float gamma, float lambda, int nextAction)
{
	for(int i = 0; i < L; i++)
	{
		for(int j = 0; j < C; j++)
		{
			if(!grid[i][j].verifyGoal(grid[i][j]))
			{
				for(k = 0; k < grid[i][j].getNumberActions(); k++)
				{
					if(grid[i][j].actions[k] != -999)
					{
						grid[i][j].actions[k] = grid[i][j].actions[k] + alpha * delta * Z[i][j].actions[k]; 

						if(this->verifyAStar(nextAction))
						{
							Z[i][j].actions[k] = gamma * lambda * Z[i][j].actions[k];
						}
						else
						{
							Z[i][j].actions[k] = 0;
						}
					}
				}
			}
		}
	}
}

int ElegibilityTracesFeatures::getAStar()
{
	return this->AStar;
}

void ElegibilityTracesFeatures::setAStar(State state, int nextAction)
{
	this->AStar = explorationMethods.verifyMaxAction(state);
	if(nextAction == AStar)
		this->AStar = nextAction;
}