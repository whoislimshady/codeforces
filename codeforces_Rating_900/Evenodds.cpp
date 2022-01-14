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
    long long int n, bridge, index;
    cin >> n >> index;
    if (index <= (n + 1) / 2)
    {
        cout << index * 2 - 1;
    }
    else
    {
        cout << (index - (n + 1) / 2)* 2;
    }
    return 0;
}
