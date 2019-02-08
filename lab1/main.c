#include <stdio.h>
#include <string.h>
#include "areaOfShapes.h"

int main(int argc, char* argv[])
{

	if(strcmp(argv[1],"Circle") == 0 || strcmp(argv[1],"circle") == 0)
	{
		printf("\nArea of a Circle\n");
	}
	else if(strcmp(argv[1],"Rectangle") == 0 || strcmp(argv[1],"rectangle") == 0)
	{
		printf("\nArea of a Rectangle\n");
	}
	else if(strcmp(argv[1],"Triangle") == 0 || strcmp(argv[1],"triangle") == 0)
	{
		printf("\nArea of a Triangle\n");
	}
	else
	{
		printf("Invalid area function\n");
	}
	return 0;
}