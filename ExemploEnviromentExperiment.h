#ifndef _ExemploEnviromentExperiment_
#define _ExemploEnviromentExperiment_

#include "GlobalVariables.h"

#include "ExemploEnviroment.h"
#include "QLearning.h"


class ExemploEnviromentExperiment
{

	QLearning agent;
	ExemploEnviroment enviroment;

	public:

		void Experiment_Initialization(float alpha, float gamma, float eGreedy, float lambda, float reward, float reward_goal, int numberActions);
		void Experiment_ControlLoop();
		void Experiment_Clean();


};

#endif