#include<stdio.h>
#include<math.h>

void main(){
    float r;

    printf("Radius = ");
    scanf("%f",&r);

    printf("diameter = %f \n",2*r);
    printf("Circumference = %f \n", 2*3.14*r);
    printf("Area = %f \n",3.14*r*r);
}
