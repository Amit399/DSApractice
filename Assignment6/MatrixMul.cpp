#include<bits/stdc++.h>
using namespace std;
//Matrix multiplication for "Square Matrix"
vector<vector<int>> product(vector<vector<int>>A, vector<vector<int>>B)
{
    int n=A.size();
    vector<vector<int>>C;
    for(int i=0;i<n;i++)
    {vector<int>row;
        for(int j=0;j<B[0].size();j++)
        { int r=0;
            for(int k=0;k<B.size();k++)
            {
                r=r+A[i][k]*B[k][j];
            }
            row.push_back(r);
        }
        C.push_back(row);
    }
    return C;
}
int main()
{
    vector<vector<int>>A;
    vector<vector<int>>B;
    vector<vector<int>>C;
    int X,Y,U,V;
    cout<<"row and column of A"<<"\n";
    cin>>X>>Y;
    cout<<"row and column of B"<<"\n";
    cin>>U>>V;
    if(Y!=U)
        return 0;
    cout<<"matrix 1"<<"\n";
    for(int i=0;i<X;i++)
    {
        vector<int>row;
        int a;
        for(int j=0;j<Y;j++)
        {
            cin>>a;
            row.push_back(a);
        }
        A.push_back(row);
    }
    cout<<"matrix 2"<<"\n";
    for(int i=0;i<U;i++)
    {
        vector<int>row;
        int a;
        for(int j=0;j<V;j++)
        {
            cin>>a;
            row.push_back(a);
        }
        B.push_back(row);
    }
    C=product(A,B);
    for(int i=0;i<C.size();i++)
    {
        for(int j=0;j<C[i].size();j++)
        {
            cout<<C[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
