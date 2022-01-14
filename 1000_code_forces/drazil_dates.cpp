#include <iostream>
#include <fstream>
#include <istream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main()
{

    int a,b,c;

    cin >> a >> b;
    cin>>c;
    if(c>=abs(a)+abs(b) && (c-abs(a)+abs(b))%2==0){
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}