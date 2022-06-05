#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
int main()
{
    float m, h, bmi;
    printf("Zadej vysku [cm] a hmotnost [kg]:");
    scanf("%f%f", &h, &m);
    bmi = m / pow(h / 100., 2);
    printf("BMI = %.3f", bmi);
    return 0;
}