#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    while (a>b)
    {
        a = (a*3);
        b = (b*2);
        c++;
    }
    cout<<c;


    return 0;
}