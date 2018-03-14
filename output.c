//function definition of output_results()

#include <stdio.h>
#include "score.h"

void output_results(const int s[], const int m[])
{
	int i;
	printf("Here are the marks: \n");
	for(i=0; i<MAX && s[i]!=-1; i++)
	{
		printf("%4d", s[i]);
	}
	printf("\nHere are the statistics: \n");
	for(i=0; i<6; i++)
		printf("Mark %d: %d hits\n", i, m[i]);
}
