#ifndef _RLFeatures_
#define _RLFeatures_

#include "State.h"

class RLFeatures
{

	float alpha, gamma, eGreedy, lambda;

	public:

		 RLFeatures();
		 RLFeatures(float alpha, float gamma, float eGreedy, float lambda);
		 RLFeatures(float alpha, float gamma, float eGreedy);
		~RLFeatures();

		double getAlpha();
		double getGamma();
		double getEGreedy();
		double getLambda();

		void setAlpha(float value);
		void setGamma(float value);
		void setEgreedy(float value);
		void setLambda(float value);

		
		double verifyMaxValue(State state);
};


#endif