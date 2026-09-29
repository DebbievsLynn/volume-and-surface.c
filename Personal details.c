//single line comment
//program to input personal details
/*

Author:Deborah Mbatia
Description: Personal details program
Date:19/09/2026
version:
*/

//Pre-processor directive
#include<stdio.h>
int main(){

float height;
float bank_balance;
long long phone_number;

 printf("Enter your height: ");
 scanf("%f",&height);

 printf("Enter your bank balance: ");
 scanf("%f",&bank_balance);

 printf("Enter your phone number:");
 scanf("%lld",&phone_number);

printf("\nHeight:%.2f m\n",height);
 printf("bank balance:%f KSH\n",bank_balance);
 printf("phone number:%lld\n",phone_number);

return 0;
}
