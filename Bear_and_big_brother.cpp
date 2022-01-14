#include <iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a>>b;
    while (b >= a)
    {
        a = (a*3);
       
        b = (b*2);
      
        c++;
    }
    cout<<c;


    return 0;
}