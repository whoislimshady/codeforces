#include <iostream>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
bool issubstring(string s, string p)
{
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] != s[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string a, b, c = "hello";
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if(issubstring(c,(b+a[i])))
        {
            b = b+a[i];
        }
        
    }
    if (b==c){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}