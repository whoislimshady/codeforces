#include <stdio.h>
int main(){
    int arr[5],temp;
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>temp)
        {
            temp = arr[i];
        }
        
    }
    printf("%d",temp);

    return 0;
}