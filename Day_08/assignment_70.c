#include <stdio.h>

int main()
{
    int n, i, key, flag = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element %d found at index %d\n", key, i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Element %d not found in the array\n", key);

    return 0;
}