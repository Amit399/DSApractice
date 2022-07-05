#include<bits/stdc++.h>
using namespace std;
vector<int>countsort(vector<int> &A)
{
    int max=A[0];
    int n=A.size();
    vector<int>c;
    vector<int>O;
    for(int i=1; i<n; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    for(int l=0; l<=max; l++)
    {
        c[l]=0;
    }
    for(int k=0; k<n; k++)
    {
        c[A[k]]++;
    }
    for(int j=0;j<=max;j++)
    {
        int s=c[j];
        while(s!=0)
        {
            O.push_back(j);
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
