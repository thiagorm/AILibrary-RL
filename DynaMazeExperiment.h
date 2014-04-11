#ifndef _DynaMazeExperiment_
#define _DynaMazeExperiment_

#include "GlobalVariables.h"

#include "DynaMazeEnviroment.h"
#include "SARSA.h"


class DynaMazeExperiment
{

	SARSA agent;
	DynaMazeEnviroment enviroment;

	public:

		void Experiment_Initialization(float alpha, float gamma, float eGreedy, float lambda, float reward, float reward_goal, int numberActions);
		void Experiment_ControlLoop();
		void Experiment_Clean();


};

#endif