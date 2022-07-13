#include <bits/stdc++.h>

#define forn(n) for(int i=0;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    IOS;
    int a,b,c,x,sec;

    cin >> a >> b >> c;
    
    x = (a*c) - (b*c);

    while(x%b != 0)
    {
        x++;
    }

    sec = x/b;

    cout << sec << endl;

    return 0;
}


