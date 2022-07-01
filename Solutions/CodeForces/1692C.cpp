#include <bits/stdc++.h>

#define forn(n) for(int i=0;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    IOS;
    int T;
    string board[8];
    cin >> T;
    while (T--)
    {
        forn(8)
        {
            cin >> board[i];
        }

        forn(8)
        {
            if(count(board[i].begin(),board[i].end(),'#') == 2)
            {
                if(count(board[i+1].begin(),board[i+1].end(),'#') == 1)
                {
                    cout << i+2 << " " << board[i+1].find('#')+1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}


