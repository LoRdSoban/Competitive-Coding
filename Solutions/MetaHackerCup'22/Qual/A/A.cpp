#include <bits/stdc++.h>

#define forn(n) for(int i=0;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

fstream fin("inA.txt");

bool solve()
{
    bool ans=true;
    int N, K;
    int Si, S[101]={0};

    fin >> N >> K;

    forn(N)
    {
        fin >> Si;
        S[Si]++;
    }

    forn(N)
    {
        if(S[i+1] > 2)
        {
            ans = false;
            break;
        }
    }

    if(N >= (K*2))
    {
        ans = false;
    }

    return ans;

}

int main()
{
    IOS;
    int T;
    ofstream file("A.txt");

    fin >> T;
    forn(T)
    {
        file << "Case #" << i+1 << ": " << (solve()? "YES" : "NO") << endl;
    }

    return 0;
}


