//WACP to find out the root of a quadratic equation.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float root_1 = 0.0, root_2 = 0.0, discriminant = 0.0;
    printf("-----------------------------------\n");
    printf("The quadratic equation in the form: \nax2 + bx + c = 0\n\n");
    printf("The coefficient of a:");
    scanf("%d",&a);
    printf("The coefficient of b:");
    scanf("%d",&b);
    printf("The coefficient of c:");
    scanf("%d",&c);
    printf("-----------------------------------\n");

    discriminant = (sqrt((pow(b,2)) - 4*a*c));
    root_1 = (-b + discriminant)/(2*a);
    root_2 = (-b - discriminant)/(2*a);

    printf("The first root of the equation is: %.3f\n",root_1);
    printf("The second root of the equation is: %f",root_2);
    printf("\n-----------------------------------\n");

    return 0;

}
