#include <stdio.h>
int main()
{
    int arr[10];
    int even[10], odd[10],j=0,k=0;
    printf("\nENTER 10 VALUES:-");

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 10; i++)
    {

        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[j] = arr[i];
            k++;
        }
    }
    printf("\nEVEN NUMBERS= ");
    for (int i = 0; i <= j; i++)
    {
        printf(" %d", even[i]);
    }
    printf("\nODD NUMBERS= ");
    for (int i = 1; i <= k; i++)
    {
        printf(" %d", odd[i]);
    }
    return 0;
}