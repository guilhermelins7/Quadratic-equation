#include <stdio.h>
#include <math.h>

float discriminant(float a, float b, float c)
{
    float delta;

    delta = pow(b,2) - 4 * a * c;

    return (delta);
}

float bhaskara (float b, float delta, float a)
{
    float x, x2;

    if (delta < 0)
    {
        printf("\nThe equation has no real roots.\n");
    }
    else if (delta == 0)
    {
        x = -b / (2 * a);

        printf("\nThe result of both roots of the equation are S = {%1.2f}\n", x);

        return (x);
    }
    else
    {
        x = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("\nThe results of the roots of the equation are:\nx1: %.2f\nx2: %.2f\n", x, x2);
    }
}

int main (void)
{
    float a, b, c;
    float delta;

    printf("\nEnter the values of a, b and c\n");
    scanf("%f %f %f", &a, &b, &c);

    while (a == 0)
    {
        printf("\nThe value of a cannot be 0.\nPlease enter a new value for a.\n");
        scanf("%f", &a);
    }

    delta = discriminant(a, b, c);

    bhaskara(b, delta, a);

    return 0;
}
