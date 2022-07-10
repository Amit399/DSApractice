#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    Node* next;
};
 
class Stack{
	int n=0;
	Node* start;
 
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		start=NULL;
	}
 
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the front of stack\n";
		Node* temp= new Node;
		temp->value=val;
		temp->next=start;
		start=temp;
		n++;
	}
 
	int front(){
		cout<<"returning the value at front\n";
		return start->value;
	}
 
	void pop(){
		cout<<"removing the first element\n";
		if(isEmpty())
		{
		    return;
		}
		Node* temp=start;
		start=start->next;
		n--;
	}
 
	int size(){
		cout<<"return the size of the Stack\n";
		return n;
	}
 
	bool isEmpty(){
		cout<<"returning if the Stack is empty\n";
		if(!start)
		{
		    return true;
		}
		return false;
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
