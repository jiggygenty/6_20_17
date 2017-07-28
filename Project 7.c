//Meant to teach additional math functions
//using a new library
#include<math.h>
#include<stdio.h>
void main()
{
//Characters, declarations, and initializations
char c1[]="abcd";
char c2[5]="abcd";
char c3[]={'a','b','c','d','\0'};
char c4[5]={'a','b','c','d','\0'};

//Numbers, declarations and initializations
const double e=2.718281828459;
double irrational;
int fingers,j;
long int fact=1 ;

//Compute
//e=3.141592; //illegal
fingers=5;
irrational=sqrt(2.0);

//loop
for(j=1;j<11;j++) //NOTE THAT THERE IS NOT A SEMICOLON
        fact*=j;

//IO
printf("Strings: %s %s %s %s \n",c1,c2,c3,c4);
printf("Numbers: %f %lf %d %ld \n",e,irrational,fingers,fact);
}
