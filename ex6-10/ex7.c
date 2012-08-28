#include <stdio.h>

int main(int argc, char* argv[]) 
{
	int bugs = 100;
	double bug_rate = 1.2;
	printf("You have %d bugs imaginary rate of %f\n", bugs, bug_rate);

	long universe_of_defects = 1 * 1024 * 1024 * 1024;

	printf("The entire universe has %d bugs.\n", universe_of_defects);

	return 0;
}