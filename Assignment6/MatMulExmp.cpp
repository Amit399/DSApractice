#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> product(vector<vector<int>>A, vector<vector<int>>B)
{
    int n=A.size();
    vector<vector<int>>C;
    for(int i=0;i<n;i++)
    {vector<int>row;
        for(int j=0;j<n;j++)
        { int r=0;
            for(int k=0;k<n;k++)
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
    vector<vector<int>>A{{1,0,1},{0,1,0},{1,0,1}};
    vector<vector<int>>B{{2,2,0},{0,2,2},{2,0,2}};
    vector<vector<int>>C;
    C=product(A,B);
    for(int i=0;i<C.size();i++)
    {
        for(int j=0;j<C.size();j++)
        {
            cout<<C[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
