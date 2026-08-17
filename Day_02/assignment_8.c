#include <stdio.h>
int main()
{
    float area = 0.0;
    printf("-----------------------------------\n");
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    printf("The area of the circle with radius %.3f is %.4f\n\n",radius,area);
    printf("-----------------------------------\n\n");

    float base, height;
    printf("Enter the base of the triangle: ");
    scanf("%f",&base);
    printf("Enter the height of the triangle: ");
    scanf("%f",&height);
    area = 0.5*base*height
    printf("The area of the triangle with base %.3f and height %.3f is %.4f\n\n",base, height,area;);

    float side;
    printf("Enter the side of the square: ");
    scanf("%f",&side);
    area = side*side;
    printf("The area of the square with side %.3f is %.4f\n\n",side,area);

    float length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    area = length*breadth;
    printf("The area of the rectangle with length %.3f and breadth %.3f is %.4f\n",length, breadth, area);

    return 0;
}