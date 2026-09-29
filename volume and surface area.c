//single line comment
//calculate volume & surface area of a cylinder
//Author: DEBRAH MBATIA
//REG:BCS-05-0555/2026

#include<stdio.h>
#define PI 3.143
int main(){

float r,h;
float volume,surface_area;
//prompt user to enter radius and height
printf("Enter radius of cylinder:");
scanf("%f",&r);

printf("Enter height of cylinder:");
scanf("%f",&h);

//calculations
volume=PI*r*r*h;
surface_area= 2*PI*r*(r+h);

//output;
printf("\n\n");
printf("volume of cylinder:%.2f\n",volume);
printf("surface area of cylinder:%.2f\n",surface_area);

return 0;
}

