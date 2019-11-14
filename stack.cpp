#include<bits/stdc++.h>
using namespace std;
#define Max_Size 101
class Stack{
	private:
		int A[Max_Size];
		int top;
	public:
		//constructor
		Stack(){
			top=-1;
		}
		
		void Push(int x){
			if(top==Max_Size-1){
				cout<<"ERROR : STACK OVERFLOW \n";
			}
			//top++;
			//A[top]=x;
			A[++top]=x;
			
		}
		
		void Pop(){
			if(top==-1){
				cout<<"ERROR:STACK UNDER FLOW";
			}
			top--;
		}
		
		int Top(){
			cout<<A[top]<<"\n";
		}
		
		string isEmpty(){
		 (top==-1)?cout<<"true":cout<<"false";
		}
		
		void Print(){
			int i;
			for(i=0;i<=top;i++){
				cout<<A[i]<<" ";
				
			}
			cout<<"\n";
		}
		
		
		
		
};



int main(){
	Stack s;
	s.Push(40);
	s.Push(50);
	s.Push(100);
	s.Top();
	s.Pop();
	s.Top();
	s.Print();
	s.isEmpty();
	
}
