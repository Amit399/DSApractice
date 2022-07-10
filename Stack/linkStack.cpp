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
	Node* next;
 
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		start=NULL;
	}
 
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Node* temp= new Node;
		temp->value=val;
		if(isEmpty())
		{
		    temp->next=NULL;
		    start=temp;
		}
		else
		{
		    temp->next=start;
		    start=temp;
		}
		n++;
		/*if(isEmpty())
		{
    		start=end=temp;
    		n++;
		}
		else
		{
		    end->next=temp;
		    end=temp;
		    n++;
		}*/
		
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
		Node* temp;
		temp=start;
		start=start->next;
		n--;
	}
 
	int size(){
		cout<<"return the size of the queue\n";
		return n;
	}
 
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
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
