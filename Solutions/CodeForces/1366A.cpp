#include <bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    IOS;
    int T, temp, a, b, ans=0;

    cin >> T;
    while (T--)
    {
        ans=0;
        cin >> a >> b;

        if(b>a)
        {
            temp = a;
            a = b;
            b = temp;
        }

        //cout << "a " << a << endl;
        //cout << "b " << b << endl;

        ans = a-b;
        
        if(ans>b)
        {
            ans -= ans-b;
        }

        //cout << "ans " << ans << endl;

        a -= 2*ans;
        b -= ans;

        //cout << "a " << a << endl;
        //cout << "b " << b << endl;

        ans += ((b/3)*2);

        if(b%3==2)
            ans++;

        cout << ans << endl;
    }

    return 0;
}


