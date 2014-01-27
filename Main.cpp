#include <iostream>

#include <conio.h>
#include <time.h>

#include "DynaMazeEnviroment.h"

using namespace std;


int main(int argc, char *argv)
{

	DataStorage dataStorage;
	ExplorationMethods explorationMethods;
	PrintEnviroments printEnviroments;
	RLFeatures rlFeatures(0.1, 0.95, 0.1);
	QLearning qLearning;
	SARSA sarsa;
	int numberAtions = 0;

	DynaMazeEnviroment dynaEnvoriment(0,1);

	srand ( time(NULL) );

	cout << "Informe o numero de Acao para cada estado do ambiente: " << endl;
	cin >> numberAtions;

	system("cls");

	dynaEnvoriment.inicializationGrid(numberAtions);
	dynaEnvoriment.convergenceLoop(sarsa, qLearning, dataStorage, explorationMethods, rlFeatures);


	getch();

	return 1;
}