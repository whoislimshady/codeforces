#include <iostream>
#include <algorithm>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    reverse(s1.begin(),s1.end());
    if (s1.compare(s2)==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}