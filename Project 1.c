#include<math.h>
#include<stdio.h>
void main()
{
    int x, product,i;
    product=1;
    printf("Provide a number of natural numbers, for which to calculate the product: ");
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        product*=i;
    }
    printf("The product is %d",product);
}
