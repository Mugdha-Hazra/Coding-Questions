#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k=s[0]-'0';
        if(k==1)
        cout<<"13\n";
        else if(k==2)
        cout<<"23\n";
        else if(k==3)
        cout<<"31\n";
        else if(k==4)
        cout<<"41\n";
        else if(k==5)
        cout<<"53\n";
        else if(k==6)
        cout<<"61\n";
        else if(k==7)
        cout<<"71\n";
        else if(k==8)
        cout<<"83\n";
        else if(k==9)
        cout<<"97\n";
        else
        cout<<"-1\n";
    }
}
