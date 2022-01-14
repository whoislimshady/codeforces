#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n, t, i = 0,j=0;
    cin >> n >> t;
    char s1;
    string s;
    cin >> s;
    while (t != 0)
    {   i=0;
        while (i <= s.length())
        {
            if (s[i + 1] == s[i + 2])
            {
                j = j + 2;
            }
            else
            {
                j++;
            }
            if (s[i] != s[i + 1] && s[i + 1] == 'G' && s[i] == 'B')
            {
                s1 = s[i];
                s[i] = s[i + 1];
                s[i + 1] = s1;
            }
            if (j==2)
            {
                i =i+2;
                j=0;
            }
            else
            {
                i++;
                j=0;
            }
            
        }
        t--;
    }
    cout << s;

    return 0;
}