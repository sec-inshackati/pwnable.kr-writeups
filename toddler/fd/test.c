//what is the result of <int>-0x1234 ?
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		printf("It is required exactly one integer argument");
		return -1;
	}

	int i = atoi(argv[1]);
	printf("Result of %d - 0x1234 is %d \n", i, i - 0x1234);

  	
	return 0;
}
