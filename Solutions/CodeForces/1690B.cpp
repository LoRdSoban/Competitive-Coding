#include <bits/stdc++.h>

#define forn(n) for(int i=0;i<n;i++)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    IOS;
    bool same = true;
    int T, size, num, max = 0;
    vector<int> arr1,arr2;

    cin >> T;
    while (T--)
    {
        cin >> size;
        forn(size)
        {
            cin >> num;
            arr1.push_back(num);
        }

        forn(size)
        {
            cin >> num;
            arr2.push_back(num);

            if((arr1[i]-arr2[i]) > max )
            {
                max = arr1[i]-arr2[i];
            }
        }

        forn(size)
        {
            arr1[i] -= max;
            
            if(arr1[i] < 0)
            {
                arr1[i] = 0;
            }

            if(arr1[i] != arr2[i])
            {
                same = false;
                break;
            }
        }

        if(same)
        {
            cout << "YES\n"; 
        }
        else
        {
            cout << "NO\n";
        }

        max = 0;
        same = true;
        arr1.clear();
        arr2.clear();
    }

    return 0;
}


