#include<math.h>
#include<stdio.h>
void main() {
int i,j,k;
int array[10];
printf("How many elements (no more than 10)?");
scanf("%d",&i);
j=i;
for (i-=i;i<j;i){
    printf("Enter value for the index #%d ",i++);
    scanf(" %d",&array[i]);
}
for (i=j;i>0;i){
    printf("The number in index# %d is %d\n",--i,array[i]);
}
printf("The number of even indices is %d\n",(j/2)+1);

for (i=0;i<j+1;i+=2){
    printf("The value for each even indice is %d\n", array[i+1]);
}
}
