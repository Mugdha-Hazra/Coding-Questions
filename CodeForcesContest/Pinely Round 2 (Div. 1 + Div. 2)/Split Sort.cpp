#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> ar(n + 1);
        for (int i = 1; i < n + 1; i++) {
            int num;
            cin >> num;
            ar[num] = i;
        }
        int op = 0;
        for (int i = 1; i < n; i++) {
            if (ar[i + 1] < ar[i]) {
                op++;
            }
        }
        cout << op << std::endl;
    }
return 0;
}
