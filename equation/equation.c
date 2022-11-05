#include<stdio.h>
#include<math.h>

int main(){
	//(x2+y+c=0)
	double a,b,c;
	double root1,root2;
	double divided, divider;
	printf("Enter the values of a, b and c \n");
	scanf("%f%f%f", &a, &b ,&c);
	
	
	divided = sqrt(b * b - 4 * a * c);
	divider = 2 * a;
	
	root1 = (-b + divided) / divider;
	root2 = (-b - divided) / divider;
	printf("Root1 is: %f\t and Root2 is: %f", root1, root2);
	
	return 0;
	}
