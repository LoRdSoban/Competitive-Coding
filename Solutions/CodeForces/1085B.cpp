#include <bits/stdc++.h>

#define forn(n) for(int i=1;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    IOS;
    int n,k,x, smallest_x = INT_MAX;

    cin >> n >> k;

    forn(k)
    {
        if(n%i == 0)
        { 
            x = i;
            while((x/k)*(x%k) != n)
            {
                x+=k;
            }

            if(x < smallest_x)
            {
                smallest_x = x;
            }
        }
    }

    cout << x << endl;

    return 0;
}


