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
    sort(vec.begin(), vec.end());

    for (int i = 0; i < n; i++)
    {
        if (vec[0].first < vec[n - 1].first && vec[0].second > vec[n - 1].second)
        {
            cout << "Happy Alex";
            break;
        }
        else if (i == n-1)
            cout << "Poor Alex";
    }

    return 0;
}
