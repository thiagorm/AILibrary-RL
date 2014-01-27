#ifndef _DataStorage_
#define _DataStorage_

#include <stdio.h>

class DataStorage
{
	FILE *link;

	public:

		DataStorage();
		~DataStorage();

		void recordRewards(double reward_value);
		void recordActions(double action_value);

};

#endif