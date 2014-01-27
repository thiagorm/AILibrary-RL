#include <stdio.h>
#include <stdlib.h>
#include "State.h"

State::State()
{

}

State::State(int numberActions)
{
	this->numberActions = numberActions;
}

State::State(int numberActions, bool finalState)
{
	this->numberActions = numberActions;
	this->finalState = finalState;

	this->actions = (double *) malloc(numberActions * sizeof(double));
}

State::~State()
{
	this->numberActions = NULL;
	this->finalState = NULL;
	this->actions = NULL;
}

int State::getNumberActions()
{
	return this->numberActions;
}

void State::setNumberActions(int value)
{
	this->numberActions = value;
}

bool State::getFinalState()
{
	return this->finalState;
}

void State::setFinalState(bool value)
{
	this->finalState = value;
}

void State::setActions(int value)
{
	this->actions = (double *) malloc(value * sizeof(double));
}

bool State::verifyGoal(State state)
{
	if(state.finalState == true)
		return true;
	else
		return false;
}

