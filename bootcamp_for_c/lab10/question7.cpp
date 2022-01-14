#include <stdio.h>

int main()
 {
    int arr[10], even[10], odd[10];
    int i,j=0,k=0,n;
	
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr[i]);
	    }

    for(i=0;i<n;i++)
    {
	if (arr[i]%2 == 0)
	{
	   even[j] = arr[i];
	   j++;
	}
	else
	{
	   odd[k] = arr[i];
	   k++;
	}
    }

    printf("\nThe Even elements are : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",even[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", odd[i]);
    }
    printf("\n\n");	
    return 0;
 }