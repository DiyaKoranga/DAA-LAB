
#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the numnber of elements: \n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements\n:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ele;
    printf("\nenter the element to be searched:");
    scanf("%d", &ele);
    int j = 0, x;
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            j++;
            x = i;
        }
    }
    if (j > 0)
    {
        printf("Element is present and the number of comparisons are %d ", x + 1);
    }
    else
    {
        printf("element is not present in the array!");
    }

    return 0;
}