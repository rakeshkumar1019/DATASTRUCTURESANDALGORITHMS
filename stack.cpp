#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
class Queue{
	private:
		int a[MAX_SIZE];
		int front,rear;
	public:
		Queue()
		{
		front=-1;
		rear=-1;	
		}
	bool IsEmpty(){
		if(front==-1 && rear==-1){
		cout<<"True \n"<<endl;
		}else{
			cout<<"false \n"<<endl;
		}
	}
	
	bool IsFull(){
		if((rear+1)%MAX_SIZE==front){
			cout<<"true \n"<<endl;
		}else{
			cout<<"fasle \n"<<endl;
		
		}
	}
	
	void Enqueue(int x){
		if((rear+1)%MAX_SIZE==front){
			cout<<"error:queue is full \n";
			return;
		}
		 if(front==-1 && rear==-1){
			front=rear=0;
		}else{
			rear=(rear+1)%MAX_SIZE;
		}
		
		a[rear]=x;
//		cout<<a[rear]<<" ";
//		cout<<endl;
	 
	}
	
	void Deque(){
		if(front==-1 && rear==-1){
			cout<<"Error: cannot remove fromempty queue \n";
			return;
		}
		if(front==rear){
			front=rear=-1;
		}else{
		front=(front+1)%MAX_SIZE;	
		}
	}
	
	int Front(){
		if(front==-1 && rear==-1){
			cout<<"Error cannot show front in empty queue \n";
		}
	 cout<<a[front]<<endl;
	}
	
	int Print(){
		int count=(rear+MAX_SIZE-front)%MAX_SIZE+1;
		for(int i=0;i<count;i++){
			int index=(front+i)%MAX_SIZE;
			cout<<a[index]<<" ";
		}
		cout<<"\n";
	}
	
	
};
int main(){
	Queue q;
	 q.IsFull();
	 q.IsEmpty();
	 q.Enqueue(10);
	 q.Enqueue(20);
	 q.Enqueue(23);
	 q.Enqueue(40);
	 q.Deque();
	 q.Front();
	 q.IsEmpty();
	 q.IsFull();
 
     q.Print();
 
	
}
