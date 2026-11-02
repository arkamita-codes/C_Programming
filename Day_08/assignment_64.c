//WACP to fibonacci series  using recursion

#include <stdio.h>
#include <math.h>
void area_of_triangle(int, int,int);
void type_of_triangle( int, int, int);
int main()
{
    float a, b, c;
    printf("Enter the side of the triangle: ");
    scanf("%f",&a);
    printf("Enter the side of the triangle: ");
    scanf("%f",&b);
    printf("Enter the side of the triangle: ");
    scanf("%f",&c);
    printf("\n\n");
    
    if(a <= 0 && b <= 0 && c <= 0)
        printf("Negative number of terms cannot be implemented");
    else
    {
        type_of_triangle(a, b, c);
        area_of_triangle(a, b, c);
    }
    
    return 0;
}

void area_of_triangle(int a, int b,int c)
{
    float area = 0.0;
    float s = 0.0;
    s = (a + b + c)/2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    printf("The area of the triangle is %.2f\n", area);
}
void type_of_triangle( int a, int b, int c)
{
    if(a == b && b == c && c == a)
        printf("Equilateral triangle\n");
    else if(a == b || b == c || c == a)
        printf("Isosceles triangle\n");
    else if(a != b && b != c & c != a)
        printf("Scalene triangle\n");
}