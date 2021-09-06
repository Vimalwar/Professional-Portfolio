#include<stdio.h>
int main()
{
int number;
printf("Enter your age: ");
scanf("%d" ,&number);
if(number>=18)
{
printf("You are eligible for voting\n");
}
else
{
printf("You are not eligible for voting\n");
}
return 0;
}
