#include <iostream>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0, b = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c += 1;

        }
        else
        {
            c = 0;
        }
        if (c >= 6)
        {
            cout << "YES";
            b = 1;
            break;
        }
    }
    if (b != 1)
    {
        cout << "NO";
    }

    return 0;
}