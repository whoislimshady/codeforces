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
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end());
    for(auto x:vec)
        cout<<x<<" ";
    return 0;
}