//circuler linked list
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};

Node* head=NULL;

//inserting at beging or ending same in circuler Linked list
void insertBeg(int d){
	Node* newNode=new Node();
	newNode->data=d;
	newNode->next=NULL;
	if(head==NULL){
		newNode->next=newNode;
		head=newNode;
		return;
	}
	Node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->next=head;
}

void insertPos(int d,int n){
	Node* newNode=new Node();
	newNode->data=d;
	newNode->next=NULL;
	Node* temp=head;
	for(int i=0;i<n-1;i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}

void Display(){
	Node* temp=head;
	do{
		cout<<temp->data<<"->";
		temp=temp->next;
	}while(temp!=head);
	
}

void deleteHead(){
	Node* temp=head;
	do{
		temp=temp->next;
	}while(temp->next!=head);
	temp->next=head->next;
	delete head;
	head=temp->next;
}

void deletePos(int n){
	Node* temp=head;
	for(int i=0;i<n-1;i++){
		temp=temp->next;
	}
	Node* tempNext=temp->next;
	temp->next=tempNext->next;
	delete tempNext;
}

int main(){
insertBeg(100);
insertBeg(10);
insertBeg(9);	
insertBeg(8);	
insertBeg(7);
insertBeg(6);
insertBeg(5);
insertPos(40,6);
insertPos(1,0);
Display();
deleteHead();
cout<<endl;
Display();
deletePos(2);
cout<<endl;
Display();
}
