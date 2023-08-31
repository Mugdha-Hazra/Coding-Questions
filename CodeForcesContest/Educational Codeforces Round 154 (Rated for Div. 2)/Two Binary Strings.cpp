#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int f=0;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<a.size();i++){
            if(a[i]=='1')
            {
                if(b[i]=='1')
                {
                    cout<<"YES\n";
                    f=1;
                    break;
                }
                else
                break;
            }
            else if(b[i]=='1')
            {
                if(a[i]=='1')
                {
                    cout<<"YES\n";
                    f=1;
                    break;
                }
                else
                break;
            }
        }
        if(f==0){
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]=='0')
            {
                if(b[i]=='0')
                {
                    cout<<"YES\n";
                    f=1;
                    break;
                }
                else
                break;
            }
             else if(b[i]=='0')
            {
                if(a[i]=='0')
                {
                    cout<<"YES\n";
                    f=1;
                    break;
                }
                else
                break;
            }
        }
        }
        if(f==0)
        {
            // vector<int>c,d;
            // for(int i=0;i<a.size();i++)
            // {
            //     if(a[i]==b[i]&&a[i]=='0')
            //     c.push_back(i+1);
            //     else if(a[i]==b[i]&&a[i]=='1')
            //     d.push_back(i+1);
            // }
            
        vector<int> idx0;
        set<int> idx1;
        
        int n = a.length();
        for (int i = 0; i < n; i++) {
            if (a[i] == '0' && b[i] == '0') {
                idx0.push_back(i);
            }
            if (a[i] == '1' && b[i] == '1') {
                idx1.insert(i);
            }
        }
        
        bool ans = false;
        for (int idx : idx0) {
            if (idx1.count(idx + 1)) {
                ans = true;
                break;
            }
        }
        
        cout << (ans ? "YES" : "NO") << endl;
    }

            
            
        // cout<<"NO\n";
        
    }
}
