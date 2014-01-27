#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "DataStorage.h"


DataStorage::DataStorage()
{
	this->link = NULL;
}

DataStorage::~DataStorage()
{
	this->link = NULL;
}

void DataStorage::recordRewards(double reward_value)
{
	if((link = fopen("rewards_values.txt", "a+t")) == NULL)
	{
		printf("Erro... to try open the file!");
		getch();
		exit(1);
	}

	fprintf(link,"%.2f\n",reward_value);

	fclose(link);
}

void DataStorage::recordActions(double action_value)
{
	if((link = fopen("actions_values", "a")) == NULL)
	{
		printf("Erro... to try open the file!");
		getch();
		exit(1);
	}

	fprintf(link,"%d\n",action_value);

	fclose(link);
}