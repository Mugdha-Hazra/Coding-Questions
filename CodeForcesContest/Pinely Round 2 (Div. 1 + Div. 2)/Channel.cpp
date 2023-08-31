#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,q,c=0,d=0,f=0;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+')
            c++;
            else
            d++;
        }
        if(c+a<n)
        cout<<"NO\n";
        else{
            for(int i=0;i<s.size();i++)
        {
            if(a==n)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
            if(s[i]=='+')
            a++;
            else
            a--;
             if(a==n)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"MAYBE\n";
        }
    }
    return 0;
}
