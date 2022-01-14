#include <stdio.h>
int main(){
    int arr[10];
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("number you entered are:%d\n",arr[i]);
    }
    

    return 0;
}