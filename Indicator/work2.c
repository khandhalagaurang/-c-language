// input and print array elements using pointers
#include <stdio.h>
int main()
{
    int a[50],n,i;
    int * ptr = a; 

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = arr;
    printf("array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}