#include<bits/stdc++.h>
using namespace std;
bool ispresent(vector<vector<int>> &A, int i, int j, int t)
{
    while(i>=0 && j>=0)
    {
        if(A[i][j]==t)
        {
            return true;
        }
        i--;
        j--;
    }
    while(i>=0 && j<A[0].size())
    {
        if(A[i][j]==t)
        {
            return true;
        }
        i--;
        j++;
    }
    while(i<A.size() && j>=0)
    {
        if(A[i][j]==t)
        {
            return true;
        }
        i++;
        j--;
    }
    while(i<A.size() && j<A[0].size())
    {
        if(A[i][j]==t)
        {
            return true;
        }
        i++;
        j++;
    }
    return false;
}
int main()
{
    vector<vector<int>>A{{1,2,3,7,8,6},{4,5,6,8,6,2},{7,8,9,5,7,9}};
    int i, j, target;
    cout<<"enter the initial search position"<<endl;
    cin>>i>>j;
    cout<<"enter target"<<endl;
    cin>>target;
    cout<<ispresent(A, i, j, target);
    return 0;
}
