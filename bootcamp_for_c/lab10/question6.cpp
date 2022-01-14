#include <stdio.h>
int main(){
    int arr[20],temp,sl;
    for (int  i = 0; i < 20; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i]>temp)
        {
            sl = temp;
            temp = arr[i];
            
        }
        
    }
    printf("the second greatest integer is:%d\n",sl);
    printf("the greatest integer is:%d",temp);

    return 0;
}