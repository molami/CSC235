#include<stdio.h>
#include<string.h>
int main()
{
	int length,i;
	char test[225],s;
	printf("Enter a sentence: ");
	fgets(test, 225, stdin);
	length=strlen(test);
	for(i=0; i<length/2; i++)
	{
		s=test[i];
		test[i]=test[length-1-i];
		test[length-1-i]=s;
		}
		printf("The reversed sentence is %s", test);
		return 0;
	}
