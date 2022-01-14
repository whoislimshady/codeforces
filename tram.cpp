#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,temp=0;
    cin>>n;
    while (n!=0)
    {
        cin>>a>>b;
        c = c - a;
        c = c + b;
        if (c>temp)
        {
            temp = c;
        }
        n--;
    }
    cout<<temp;
    return 0;
}