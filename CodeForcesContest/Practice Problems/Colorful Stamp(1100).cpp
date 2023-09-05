#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, f = 0;
        cin >> n;
        string s;
        cin >> s;
        set<char> v;
        for (int i = 0; i < n; i++){
            if (s[i] == 'R' || s[i] == 'B')
                v.insert(s[i]);
            else{
                if (v.size() == 1)
                {
                    f = 1;
                    break;
                }
                else
                {
                    v.clear();
                    continue;
                }
            }
        }
        if (v.size() == 1 || f == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
