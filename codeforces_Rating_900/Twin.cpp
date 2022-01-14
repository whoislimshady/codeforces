#include <iostream>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
        sum += value;
    }
    int take = sum/2;
    sort(vec.begin(), vec.end());
    

    int m = 0, u = 0, sm = 0, su = 0;
    for (auto ir = vec.crbegin(); ir != vec.crend(); ++ir){
        if (sm<=take){
            sm +=(*ir);
            m++;
        }
        else{
            su+=(*ir);
            u++;
        }
    }
    cout<<m;
    return 0;
}
    