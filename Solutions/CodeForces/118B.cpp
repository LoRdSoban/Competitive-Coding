#include <bits/stdc++.h>

#define FOR(i,n) for(int i=0;i<=n;i++)

#define FOR_R(i,n) for(int i=n;i>=0;i--)

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    IOS;
    int T;
    int a,b;
    cin >> T;
    T++;
    FOR(i,T*2-2)
    {
        a = i;
        //cout << i;
        
        if(i>=T)
        {
            a -= ((i-T)+1)*2;
            
        }

        FOR(s,T-a-2)
        {
            cout << "  ";
        }

        FOR(A,a)
        {
            cout << A;

            if(a != 0)
            cout << " ";
        }
        
        b = i;
        
        if(i>=T)
        {
            b -= ((i-T)+1)*2;
        }
        b--;

        FOR_R(B, b)
        {
            cout << B;
            
            if(B != 0)
            cout << " ";
        }

        cout << "\n";
    }

    return 0;
}


//0           0
//1         0 1 0
//2       0 1 2 1 0
//3     0 1 2 3 2 1 0
//4   0 1 2 3 4 3 2 1 0
//5 0 1 2 3 4 5 4 3 2 1 0
//6   0 1 2 3 4 3 2 1 0
//7     0 1 2 3 2 1 0
//8       0 1 2 1 0
//9         0 1 0
//10          0