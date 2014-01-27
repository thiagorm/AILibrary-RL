#ifndef _ElegibilityTracesFeatures_
#define _ElegibilityTracesFeatures_

#include "GlobalVariables.h"
#include "State.h"
#include "ExplorationMethods.h"

class ElegibilityTracesFeatures
{

	double delta;
	int AStar;
	int i;
	int j;
	int k;

	State Z[L][C];

	ExplorationMethods explorationMethods;

	public:

		ElegibilityTracesFeatures();
		~ElegibilityTracesFeatures();

		bool verifyAStar(int nextAction);
		double calculateDelta(float reward, float gamma, float nextQValue, float QValue);
		void  setZ(int i, int j, int action);

		void calculateZ(State state[][C], float alpha, float gamma, float lambda, int nextAction);
		void initializeZ();

		int getAStar();
		void setAStar(State state, int nextAction);

};



#endif