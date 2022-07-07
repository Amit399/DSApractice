#include <bits/stdc++.h>
using namespace std;
 
class Queue{
	int value, n;
	Queue* start;
	Queue* end;
	Queue* next;
 
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		cout<<"constructor is Called\n";
		start=end=NULL;
		n=0;
	}
 
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Queue* temp= new Queue;
		temp->value=val;
		temp->next=NULL;
		if(isEmpty())
		{
    		start=end=temp;
    		n++;
		}
		else
		{
		    end->next=temp;
		    end=temp;
		    n++;
		}
		
	}
 
	int front(){
		cout<<"returning the value at front\n";
		return end->value;
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
		if(!start)
		{
		    return true;
		}
		return false;
	}
};
 
int main() {
	Queue q; //constructor is called on this line
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
