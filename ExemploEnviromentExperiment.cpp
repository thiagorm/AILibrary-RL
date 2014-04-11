#include <stdio.h>
#include <stdlib.h>
#include "ExemploEnviromentExperiment.h"

void ExemploEnviromentExperiment::Experiment_Initialization(float alpha, float gamma, float eGreedy, float lambda,float reward, float reward_goal, int numberActions)
{
	this->agent.Agent_Initialization(alpha, gamma, eGreedy, lambda);
	this->enviroment.Enviroment_Initialization(numberActions, reward, reward_goal);
}

void ExemploEnviromentExperiment::Experiment_ControlLoop()
{

	while(this->enviroment.count != convergence_time)
	{
		this->enviroment.Enviroment_Loop(this->agent);
	}

	this->enviroment.printEnviroments.print(this->enviroment.grid);
}

void ExemploEnviromentExperiment::Experiment_Clean()
{
	this->agent.~QLearning();
	this->enviroment.~ExemploEnviroment();
}