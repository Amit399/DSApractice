#include<bits/stdc++.h>
using namespace std;

class Stack{
	int A[100000];
	int start;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		int A[100000];
		start=0;
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the top of stack\n";
		A[start]=val;
		start=start+1;
	}
	
	int front(){
		cout<<"returning the value at front\n";
		return A[start-1];
	}
	
	void pop(){
		cout<<"removing the first element\n";
		if(isEmpty())
		{
		    return;
		}
		start--;
		
	}
	
	int size(){
		cout<<"return the size of the stack\n";
		return start;
	}
	
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		if(start==0)
		{
		    return true;
		}
		else
		{
		    return false;
		}
	}
};

int main() {
	Stack q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
