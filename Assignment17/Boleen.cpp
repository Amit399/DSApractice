// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==target)
        {
            return true;
        }
    }
    
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    for(int i=0; i<A.size(); i++)
    {
        for(int j=0; j<A[0].size(); j++)
        {
            if(A[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    int n=A[0].size();
    for(int i=0; i<n; i++)
    {
        if(A[r][i]==target)
        {
            return true;
        }
    }
    
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    int n=A.size();
    for(int j=0; j<n; j++)
    {
        if(A[j][c]==target)
        {
            return true;
        }
    }
    
    return false;
}


int main() {
    int n, b, r, c, rw, cl, t;
    vector<int>A;
    cout<<"enter number of element in 1D vector"<<endl;
    cin>>n;
    cout<<"enter 1D vector"<<endl;
    for(int k=0; k<n; k++)
    {
        cin>>b;
        A.push_back(b);
    }
    vector<vector<int>>B;
    cout<<"Create 2D vector"
    cout<<"enter number of row and column in 2D vector"<<endl;
    cin>>r>>c;
    cout<<"enter element of 2D vector"<<endl;
    for(int i=0; i<r; i++)
    {
        vector<int>row;
        int a;
        for(int j=0; j<c; j++)
        {
            cin>>a;
            row.push_back(a);
        }
        B.push_back(row);
    }
    cout<<"enter target"<<endl;
    cin>>t;
    cout<<"row in which you want to check target"<<endl;
    cin>>rw;
    cout<<"column in which you want to check target"<<endl;
    cin>>cl;
    if(isTargetPresent(A,t))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    if(isTargetPresentIn2DVector(B,t))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    if(rw>r || rw<1)
    {
        cout<<"wrong number of row"<<endl;
    }
    else
    {
        if(isTragetPresentInRow(B,t,rw-1))
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    if(cl>c || cl<1)
    {
        cout<<"wrong clolumn number"<<endl;
    }
    else
    {
        if(isTragetPresentInCol(B,t,cl-1))
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    }
    return 0;
    
}
