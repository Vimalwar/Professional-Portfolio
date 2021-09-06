#include<stdio.h>
int main()
{
    double x;
    int n;
    printf("Enter the power of exponential e(x) : ");
    scanf("%lf",&x);
    printf("Enter the number of terms(n) : ");
    scanf("%d",&n);
    double sumseries=1,power=1;int i=1,fact=1;
    if(n>1)
    {
        while(i<n)
        {
            fact=fact*i;
            power=power*x;
            sumseries+=(power/(double)fact);i++;
        }
    }
    printf("The sum of the series upto %d terms is : %lf\n",n,sumseries);
return 0;
}
