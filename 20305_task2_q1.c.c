#include <stdio.h>
int main()
{
int number, cube;
printf("Enter a number:");
scanf("%d", &number);
cube= number*number*number;
printf("Cube of a given number %d is = %d",number,cube);
return 0;
}
