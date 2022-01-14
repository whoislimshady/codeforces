#include <iostream>
#include <algorithm>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>

using namespace std;
using namespace std;
 
float power(float x, int y)
{
    float temp;
    if(y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
    {
        if(y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}
 
int main(){
    int n,m=5,k;
    cin>>n;
    string s;
    k = power(5,m);
    s= to_string(k);
    cout<<s.substr(s.size() - 2);
    return 0;

}