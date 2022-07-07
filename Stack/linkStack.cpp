#include <iostream>
using namespace std;

//complete the functions
class Stack{
	int value,n ;
	int *start;
	int *next;
	
	public:
	//constructor is called whenever an object of the class is declared
	Stack(){
		cout<<"constructor is Called\n";
		start=NULL;
		n=0;
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" in Stack\n";
		Stack* temp= new Stack;
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
		start=start->next;
		n--;
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return n;
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		if(start==NULL)
		{
		    return true;
		}
		else{
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
