#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        vec.push_back(make_pair(p, q));
    }
    int gmo = 0, gmt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i].first >= gmo)
            gmo = vec[i].first;
            
        if (vec[i].second >= gmt)
            gmt = vec[i].second;

        cout << vec[i].first << " "
             << vec[i].second << endl;
    }

    return 0;
}
