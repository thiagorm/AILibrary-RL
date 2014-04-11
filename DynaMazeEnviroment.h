#ifndef _DynaMazeEnviroment_
#define _DynaMazeEnviroment_

#include "GlobalVariables.h"

#include "DataStorage.h"
#include "PrintEnviroments.h"
#include "RLFeatures.h"
#include "State.h"

#include "QLearning.h"
#include "SARSA.h"

#define WALL -999

class DynaMazeEnviroment
{
	
	int actions;
	int action, k, l;
	float maxQValue, reward, reward_goal;
	float total_reward;
	int nextAction;
	int nextState_i;
	int nextState_j;
	int i, j;

	public:
		int count;
		State grid[L][C];
		PrintEnviroments printEnviroments;

		 DynaMazeEnviroment();
		 DynaMazeEnviroment(float reward, float reward_goal);
		~DynaMazeEnviroment();

		void Enviroment_Loop(SARSA sarsa);//, QLearning qLearning, DataStorage dataStorage, ExplorationMethods explorationMethods, RLFeatures rlFeatures);
		void Enviroment_Reset(int *i, int *j);//, DataStorage dataStorage);
		void Enviromet_Initialization(int numberActions, float reward, float reward_goal);
};


#endif _DynaMazeEnviroment_