#ifndef _ExemploEnviroment_
#define _ExemploEnviroment_

#include "GlobalVariables.h"

#include "DataStorage.h"
#include "PrintEnviroments.h"
#include "RLFeatures.h"
#include "State.h"

#include "QLearning.h"
#include "SARSA.h"

#define WALL -999

class ExemploEnviroment
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

		 ExemploEnviroment();
		 ExemploEnviroment(float reward, float reward_goal);
		~ExemploEnviroment();

		void Enviroment_Loop(QLearning qLearning);//, DataStorage dataStorage, ExplorationMethods explorationMethods);
		void Enviroment_Reset(int *i, int *j);//, DataStorage dataStorage);
		void Enviroment_Initialization(int numberActions,float reward, float reward_goal);
};


#endif _ExemploEnviroment_