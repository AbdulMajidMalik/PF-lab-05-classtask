#include <stdio.h>
#include <math.h>

int main(){
float radius;
float area;
float circumFerence;
float squareRoot;
printf("enter a radius");
scanf("%f",&radius);
area = 3.14*pow(radius,2);
printf("area is %.f\n",area);
circumFerence=2*3.14*radius;
printf("circumference is %.2f\n",circumFerence);
squareRoot=sqrt(radius);
printf("square root of radius is %.2f",squareRoot);
return 0;
}
