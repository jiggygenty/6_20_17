#include<math.h>
#include<stdio.h>
void main()
{
    int x, sum,i;
    sum=0;
    printf("Provide a number of natural numbers, for which to calculate the sum: ");
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        sum+=i;
    }
    printf("The sum is %d",sum);
}
