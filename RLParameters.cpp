#include <stdio.h>
#include "RLParameters.h"

RLParameters::RLParameters()
{

}

RLParameters::RLParameters(float alpha, float gamma, float eGreedy)
{
	this->alpha = alpha;
	this->gamma = gamma;
	this->eGreedy = eGreedy;
}


RLParameters::RLParameters(float alpha, float gamma, float eGreedy, float lambda)
{
	this->alpha = alpha;
	this->gamma = gamma;
	this->eGreedy = eGreedy;
	this->lambda = lambda;
}

RLParameters::~RLParameters()
{
	this->alpha = NULL;
	this->gamma = NULL;
	this->eGreedy = NULL;
	this->lambda = NULL;
}

float RLParameters::getAlpha()
{
	return this->alpha;
}

float RLParameters::getGamma()
{
	return this->gamma;
}

float RLParameters::getEGreedy()
{
	return this->eGreedy;
}

float RLParameters::getLambda()
{
	return this->lambda;
}

void RLParameters::setAlpha(float value)
{
	this->alpha = value;
}

void RLParameters::setGamma(float value)
{ 
	this->gamma = value;
}

void RLParameters::setEgreedy(float value)
{
	this->eGreedy = value;
}

void RLParameters::setLambda(float value)
{
	this->lambda = value;
}

