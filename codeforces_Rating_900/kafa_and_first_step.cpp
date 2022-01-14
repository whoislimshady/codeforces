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
int main()
{
    int n,gm=0,c=1;
    cin>>n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int m ;
        cin>>m;
        vec.push_back(m);
    }
    for(auto i = vec.begin(); i != vec.end(); i++){
        if (*i<=*(i+1)){
            c++;
            gm = max(c,gm,comp);     
              
        }
        else
            c=1;
    }
    
    cout<<gm;
    return 0;
}