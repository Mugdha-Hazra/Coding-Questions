#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n,k,mex=-1;
    cin>>n>>k;
    vector<int>a(n+1),b(n+1,0);
    for(int i=1;i<=n;i++){  
        int f;
        cin>>f;
        a[i]=f;
        b[f]++;
    }
    for(int i=0;i<=n;i++){
        if(b[i]==0)
        {mex=i;break;
        }
    }
    a[0]=mex;
    k=k%(n+1);
    for(int i=0;i<=n;i++){
      if((i+k)<=n)
      b[i+k]=a[i];
      else
      b[(i+k)%(n+1)]=a[i];
    }
    for(int i=1;i<=n;i++){
    cout<<b[i]<<" ";
    }
    cout<<"\n";
    }
    return 0;
}
