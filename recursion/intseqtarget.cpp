#include <bits/stdc++.h>
using namespace std;
//print all the subsequence of the string A
void recursion(vector<int> A, int i, int sum,int target)
{
    int count=0;
	if(i==A.size()) return;
	//picking up
    if(sum+A[i]==target){
	cout<<sum+A[i]<<"\n";
    
    }
    
	recursion(A,i+1,sum+A[i],target);
	recursion(A,i+1, sum,target);
}
int main() {
    vector<int>  A ={1,2,3};
	recursion(A, 0, 0,3);
}
