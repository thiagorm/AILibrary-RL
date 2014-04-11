#ifndef _RLParameters_
#define _RLParameters_

class RLParameters
{

	float alpha, gamma, eGreedy, lambda;

	public:

		  RLParameters();
		  RLParameters(float alpha, float gamma, float eGreedy, float lambda);
		  RLParameters(float alpha, float gamma, float eGreedy);
		~ RLParameters();

		float getAlpha();
		float getGamma();
		float getEGreedy();
		float getLambda();

		void setAlpha(float value);
		void setGamma(float value);
		void setEgreedy(float value);
		void setLambda(float value);

};


#endif