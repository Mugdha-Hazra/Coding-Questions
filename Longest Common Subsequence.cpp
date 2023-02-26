class Solution {
public:
    int longestCommonSubsequence(string a, string b) {

            //using the tabular approach (bottom up approach)

        // check if a and b are same
        if(a==b)
        return a.size(); // return the size if bothe the string is same in size;
        
        // the not same case below!
        int n= a.size(),m=b.size();
        int v[n+1][m+1]; // the matrix to store the values
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0) // for making the 1st row and 1st col zero
                v[i][j]=0;  
                else{ // filling the rest of the matrix
                    if(a[i-1]==b[j-1]) // if the elements are same
                    v[i][j]=1+v[i-1][j-1]; 
                    else      // if the elements are different
                    v[i][j]=max(v[i-1][j],v[i][j-1]);
                }
            }
        }
        return v[n][m]; // returning the lastelement of the matrix
        
    }
};
