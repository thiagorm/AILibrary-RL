#include <iostream>

#include <stdio.h>
#include <conio.h>
#include "ExemploEnviroment.h"

using namespace std;

ExemploEnviroment::ExemploEnviroment()
{
	this->actions = 0;
	this->count = 0; 
	this->action = 0;
	this->k = 0;
	this->l = 0;
	this->maxQValue = 0;
	this->reward = 0;
	this->reward_goal = 0;
	this->total_reward = 0;
	this->nextAction = 0;
	this->nextState_i = 0;
	this->nextState_j = 0;
	this->i = 0;
	this->j = 0;
}

ExemploEnviroment::ExemploEnviroment(float reward, float reward_goal)
{
	this->actions = 0;
	this->count = 0; 
	this->action = 0;
	this->k = 0;
	this->l = 0;
	this->maxQValue = 0;
	this->reward = reward;
	this->reward_goal = reward_goal;
	this->total_reward = 0;
	this->nextAction = 0;
	this->nextState_i = 0;
	this->nextState_j = 0;
	this->i = 0;
	this->j = 0;

}

ExemploEnviroment::~ExemploEnviroment()
{
	this->actions = NULL;
	this->count = NULL; 
	this->action = NULL;
	this->k = NULL;
	this->l = NULL;
	this->maxQValue = NULL;
	this->reward = NULL;
	this->nextAction = NULL;
	this->nextState_i = NULL;
	this->nextState_j = NULL;
	this->i = NULL;
	this->j = NULL;
}

void ExemploEnviroment::Enviroment_Initialization(int numberActions, float reward, float reward_goal)
{
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			grid[i][j].setNumberActions(numberActions);
			grid[i][j].setActions(grid[i][j].getNumberActions());
			for(k = 0; k < grid[i][j].getNumberActions(); k++)
			{
				if(i == 1 && j == 1) 
					grid[i][j].actions[k] = WALL;
				else if(i == 1 && j == 2) 
					grid[i][j].actions[k] = WALL;
				else
					grid[i][j].actions[k] = 0;

			}
		}
	}

	this->i = 1;
	this->j = 0;
	this->reward = reward;
	this->reward_goal = reward_goal;
}

void ExemploEnviroment::Enviroment_Reset(int *i, int *j)//, DataStorage dataStorage)
{
	if((*i == 0 && *j == 3))
	{
		count++;
		*i = 1;
		*j = 0;
		//dataStorage.recordRewards(total_reward);
		//dataStorage.recordActions(actions);
		//actions = 0;
		//total_reward = 0;
	}
}

void ExemploEnviroment::Enviroment_Loop(QLearning qLearning)//, DataStorage dataStorage, ExplorationMethods explorationMethods)
{
	
	//while(count != convergence_time)
	//{

	action = qLearning.Agent_Exploration().getActionEgreedy(grid[i][j], qLearning.rlParameters);

		switch(action)
		{
			//Ação UP escolhida
			case 0:
				if(i - 1 >= 0)
				{
					if(grid[i-1][j].actions[action] != WALL)
					{
						//maxQValue = qLearning.verifyMaxValue(grid[i-1][j]);
						this->nextState_i = i-1;
						this->nextState_j = j;
						if(i-1 == 0 && j == 3)
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action, reward_goal);
						else
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action,reward);
						//cout<<grid[i][j].actions[action];
						//getch();
						i--;
						total_reward+=reward;
					}
				}
				actions++;
			break;
				
			//Ação DOWN escolhida
			case 1:

				if(i + 1 <= (L-1))
				{
					if(grid[i+1][j].actions[action] != WALL)
					{
						//maxQValue = qLearning.verifyMaxValue(grid[i+1][j]);
						this->nextState_i = i+1;
						this->nextState_j = j;
						if(i+1 == 0 && j == 3)
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action,reward_goal);
						else 
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action,reward);
						//cout<<grid[i][j].actions[action];
						//getch();
						i++;
						total_reward+=reward;
					}
				}
				actions++;
			break;	

			//Ação LEFT escolhida
			case 2:

				if( j - 1 >= 0)
				{
					if(grid[i][j-1].actions[action] != WALL)
					{
						//maxQValue = qLearning.verifyMaxValue(grid[i][j-1]);
						this->nextState_i = i;
						this->nextState_j = j-1;
						if(i == 0 && j-1 == 3)
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action,reward_goal);
						else
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action,reward);
						//cout<<grid[i][j].actions[action];
						//getch();
						j--;
						total_reward+=reward;
					}
				}
				actions++;
			break;	

			//Ação RIGHT escolhida
			case 3:

				if(j + 1 <= (C-1))
				{
					if(grid[i][j+1].actions[action] != WALL)
					{
						//maxQValue = qLearning.verifyMaxValue(grid[i][j+1]);
						this->nextState_i = i;
						this->nextState_j = j+1;
						if(i == 0 && j+1 == 3)
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action,reward_goal);
						else
							grid[i][j].actions[action] = qLearning.Agent_LearningCalculation(grid[i][j], grid[nextState_i][nextState_j], action, reward);
						//cout<<grid[i][j].actions[action];
						//getch();
						j++;
						total_reward+=reward;
					}
				}
				actions++;
			break;	

		}
			
		//verificação de episodio completo
		this->Enviroment_Reset(&i, &j);//, dataStorage);
	//}

	//this->printEnviroments.print(grid);
}