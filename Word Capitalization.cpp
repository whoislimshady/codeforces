#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i=0,sum=0;
    char name[10000];
    cin.get(name, 100000);
  for (int i = 0; name[i]!=0; i++)
  {
     if (name[i]==name[i+1])
     {
         sum = sum+1;
     }
}
    printf("%d",sum);
 
   
}