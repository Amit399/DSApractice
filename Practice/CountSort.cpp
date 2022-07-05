#include<bits/stdc++.h>
using namespace std;
vector<int>countsort(vector<int> &A)
{
    int max=A[0];
    int n=A.size();
    
    vector<int>O;
    for(int i=1; i<n; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    vector<int>c(max+1);
    
    for(int i=0; i<n; i++)
    {
        c[A[i]]++;
    }
    for(int i=0;i<=max;i++)
    {
        int s=c[i];
        while(s!=0)
        {
            O.push_back(i);
            s--;
        }
    }
    return O;
    
}
int main()
{
    vector<int>A={1,2,3,2,2};
    vector<int>r=countsort(A);
    for(int i=0; i<r.size(); i++)
    {
        cout<<r[i];
    }
    return 0;
}
