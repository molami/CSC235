#include<stdio.h>
int main() {

   char lecturer[25];
   printf("Enter your name: ");
   fgets(lecturer, 25, stdin);
   printf("%s Hello, World!", lecturer);
   return 0;
}
