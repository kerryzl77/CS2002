#include <stdio.h>
#define PI 3.14

int main() {
    int radius;     
    float circ;
    printf("enter the radius : \n");
    scanf("%i",&radius);
    circ = 2 * PI * radius;
    printf("Circumference of circle with radius %i is %f\n",                            radius, circ);
    return 0;
}
