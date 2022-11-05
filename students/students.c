#include<stdio.h>
int main()
{	
	char name[25];
	int i,n;
	
	n=10;
	
	for(int i=0; i < n; i++){
		printf("Enter your name: ");
		fgets(name, 25, stdin);
		printf("Your name is %s", name);
}
    return 0;
	}
