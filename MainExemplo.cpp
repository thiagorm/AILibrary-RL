#include <iostream>

#include <conio.h>
#include <time.h>

#include "ExemploEnviroment.h"
#include "ExemploEnviromentExperiment.h"
#include "DynaMazeExperiment.h"

using namespace std;


int main(int argc, char *argv)
{

	/*DataStorage dataStorage;
	ExplorationMethods explorationMethods;
	//PrintEnviroments printEnviroments;
	RLFeatures rlFeatures(0.9, 0.9, 0.8);
	QLearning qLearning;
	SARSA sarsa;
	int numberAtions = 0;

	ExemploEnviroment exemploEnviroment(0,1);

	srand ( time(NULL) );

	cout << "Informe o numero de Acao para cada estado do ambiente: " << endl;
	cin >> numberAtions;

	

	exemploEnviroment.inicializationGrid(numberAtions);
	exemploEnviroment.convergenceLoop(qLearning, dataStorage, explorationMethods);*/

	int numberAtions = 0;
	ExemploEnviromentExperiment experiment;
	//DynaMazeExperiment experiment;

	cout << "Informe o numero de Acao para cada estado do ambiente: " << endl;
	cin >> numberAtions;

	system("cls");

	experiment.Experiment_Initialization(0.1,0.95,0.1,0.01,0,1,numberAtions);
	experiment.Experiment_ControlLoop();

	getch();

	experiment.Experiment_Clean();

	return 1;
}