//Meant to teach basic arithmetics
//+ - * / % --x ++x x++
//x+=
//x-=
#include<stdio.h>
void main()
{
int a=25, b=20, c;
c=a-b;
printf("The result of a-b: %d\n",c);
c=a+b;
printf("The result of a+b: %d\n",c);
c=a/b;
printf("The result of a/b: %d\n",c);
c=a%b;
printf("The result of a%b: %d\n",c);
--c;
printf("The result of c=c-1: %d\n",c);
++c;
printf("The result of c=c+1: %d\n",c);
c--;
printf("The result of c=c-1: %d\n",c);
c++;
printf("The result of c=c+1: %d\n",c);
c+=a;
printf("The result of c=c+a: %d\n",c);
c-=a;
printf("The result of c=c-a: %d\n",c);
c*=a;x
printf("The result of c=c*a: %d\n",c);
c/=b;
printf("The result of c=c/a: %d\n",c);
c%=b;
printf("The result of c=c%b: %d\n",c);
}

























