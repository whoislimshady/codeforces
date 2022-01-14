#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            upper += 1;
        }
        else
        {
            lower += 1;
        }
    }
    if (upper > lower)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s;

    return 0;
}