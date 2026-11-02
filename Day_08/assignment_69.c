//WACP to find the maximum and minimum element in array of size 10.
#include <stdio.h>
int main()
{
    int i, n = 10;
    int a[n];
    
    printf("Enter the elements of the array:\n ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
        
    int max = a[0];
    int min = a[0];
    
    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
        else if(a[i] < min)
            min = a[i];    
    }
    
    printf("max = %d", max);
    printf("min = %d", min);
    return 0;
}