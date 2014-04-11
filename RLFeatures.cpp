#include <stdio.h>
#include "RLFeatures.h"

RLFeatures::RLFeatures()
{

}

RLFeatures::RLFeatures(float alpha, float gamma, float eGreedy)
{
	this->alpha = alpha;
	this->gamma = gamma;
	this->eGreedy = eGreedy;
}


RLFeatures::RLFeatures(float alpha, float gamma, float eGreedy, float lambda)
{
	this->alpha = alpha;
	this->gamma = gamma;
	this->eGreedy = eGreedy;
	this->lambda = lambda;
}

RLFeatures::~RLFeatures()
{
	this->alpha = NULL;
	this->gamma = NULL;
	this->eGreedy = NULL;
	this->lambda = NULL;
}

double RLFeatures::getAlpha()
{
	return this->alpha;
}

double RLFeatures::getGamma()
{
	return this->gamma;
}

double RLFeatures::getEGreedy()
{
	return this->eGreedy;
}

double RLFeatures::getLambda()
{
	return this->lambda;
}

void RLFeatures::setAlpha(float value)
{
	this->alpha = value;
}

void RLFeatures::setGamma(float value)
{ 
	this->gamma = value;
}

void RLFeatures::setEgreedy(float value)
{
	this->eGreedy = value;
}

void RLFeatures::setLambda(float value)
{
	this->lambda = value;
}

