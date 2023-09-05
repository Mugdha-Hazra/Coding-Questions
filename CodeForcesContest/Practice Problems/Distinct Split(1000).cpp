#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        string s;
        cin >> s;
        set<char> a;
        int pref[n], suff[n];
        for (int i = 0; i < n; i++) {
            a.insert(s[i]);
            pref[i] = a.size();
        }
        a.clear();
        for (int i = n - 1; i >= 0; i--) {
            a.insert(s[i]);
            suff[i] = a.size();
        }
        int maxi = 0;
        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, pref[i] + suff[i + 1]);
        }
        cout << maxi << "\n";
    }
    return 0;
}
