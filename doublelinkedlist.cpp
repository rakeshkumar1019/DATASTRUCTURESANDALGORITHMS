//double linked list
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* prev;
	Node* next;
};
Node* head=NULL;
void insertBeg(int d){
	Node* newNode=new Node();
	newNode->data=d;
	newNode->next=NULL;
	newNode->prev=NULL;
	if(head==NULL){
		head=newNode;
		return;
	}
	newNode->next=head;
	head->prev=newNode;
	head=newNode;
}
//index is from 0-n
void insertPos(int d,int n){
        Node* newNode=new Node();
        newNode->data=d;
		newNode->next=NULL;
		newNode->prev=NULL;
		
		Node* temp=head;
		for(int i=0;i<n-1;i++){
			temp=temp->next;
		}
		
		newNode->next=temp->next;
		newNode->prev=temp;
		temp->next->prev=newNode;
		temp->next=newNode;
		
}

void Display(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

void insertEnd(int d){
	Node* newNode=new Node();
	newNode->data=d;
	newNode->next=NULL;
	newNode->prev=NULL;
	
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
}

void deleteBeg(){
	Node* temp=new Node();
	temp=head;
	if(head->next){
		head=head->next;
		head->prev=NULL;	
	}
	delete temp;
}

void deletePos(int n){
	Node* temp=head;
	for(int i=0;i<n;i++){
		temp=temp->next;
	}
	if(temp->next){
	
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
    
	}
	delete temp;
}

void deleteEnd(){
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->prev->next=NULL;
	delete [] temp;
	
}

void Reverse(){
	Node* temp;
	Node* p=head;
	while(p!=NULL){
	    temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL && p->next==NULL){
			head=p;
		}
	}
	
}


//void Reverse(){
//	Node* p=head;
//	while(p){
//		Node* temp=p->next;
//		p->next=p->prev;
//		p->next=temp;
//		p=p->prev;
//		if(p->next==NULL){
//			head=p;
//		}
//		
//	}
//}
int main(){
    insertBeg(90);
    insertBeg(80);
    insertBeg(70);
	insertBeg(30);
	insertBeg(20);
	insertBeg(10);
	insertPos(40,2);
	Display();
	cout<<endl;
	insertEnd(50);
	insertEnd(60);
	Display();
	cout<<endl;
	deleteBeg();	
	Display();
	cout<<endl;
	deletePos(2);
	Display();
	cout<<endl;
	deleteEnd();
	Display();
	cout<<endl;
	Reverse();
	Display();
	cout<<endl;
	
	
	
}
