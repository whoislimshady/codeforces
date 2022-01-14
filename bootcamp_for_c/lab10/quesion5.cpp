#include <stdio.h>
int main(){
    int arr[5],temp=0;
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>temp && arr[i]%2==0)
        {
            temp = arr[i];
        }
        
    }
    printf("%d",temp);

    return 0;
}