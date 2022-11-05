#include<stdio.h>
int main()
{
	int N, i;
	
	printf("Enter the total number you want to count up to: ");
	scanf("%d", &N);
	printf("The count from 1 to %d is: ", N);
	for (i = 1; i <= N; i++)
	{
		printf("%d\t", i);
	}
	
	return 0;
	}
