#include<math.h>
#include<stdio.h>
void main(){
double totalaccrued, principal, interestamount, rateint, time;
printf("Enter amount for the principal amount: ");
scanf("%lf",&principal);
printf("Enter the rate of interest as a percent: ");
scanf("%lf",&rateint);
printf("Enter the time in years: ");
scanf("%lf",&time);
totalaccrued=principal*(1+rateint*time/100);
printf("The total accrued amount is $%.2f",totalaccrued);
interestamount=totalaccrued-principal;
printf("\nThe interest amount is $%.2f",interestamount);
}
