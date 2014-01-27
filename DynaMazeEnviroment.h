#ifndef _DynaMazeEnviroment_
#define _DynaMazeEnviroment_

#include "GlobalVariables.h"

#include "DataStorage.h"
#include "PrintEnviroments.h"
#include "RLFeatures.h"
#include "State.h"

#include "QLearning.h"
#include "SARSA.h"

class DynaMazeEnviroment
{
	
	State grid[L][C];
	int actions;
	int count, action, k, l;
	float maxQValue, reward, reward_goal;
	float total_reward;
	int nextAction;
	int nextState_i;
	int nextState_j;
	int i, j;
	PrintEnviroments printEnviroments;

	public:

		 DynaMazeEnviroment();
		 DynaMazeEnviroment(float reward, float reward_goal);
		~DynaMazeEnviroment();

		void convergenceLoop(SARSA sarsa, QLearning qLearning, DataStorage dataStorage, ExplorationMethods explorationMethods, RLFeatures rlFeatures);
		void reset(int *i, int *j, DataStorage dataStorage);
		void inicializationGrid(int numberActions);
};


#endif _DynaMazeEnviroment_