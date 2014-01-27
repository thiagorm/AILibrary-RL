#ifndef _State_
#define _State_


class State
{
	int numberActions;
	bool finalState;

	public:

		State();
		~State();
		State(int numberActions, bool finalState);
		State(int numberActions);

		double *actions;

		int getNumberActions();
		void setNumberActions(int value);
		bool getFinalState();
		void setFinalState(bool value);

		void setActions(int value);
		bool verifyGoal(State state);
};

#endif