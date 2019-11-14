#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* link;
};
Node* head=NULL;
void insertBeg(int d){
	Node* ptr= new Node();
	ptr->data=d;
	ptr->link=head;
	head=ptr;
}

void insertEnd(int d){
	Node* ptr=new Node();
	ptr->data=d;
	ptr->link=NULL;
	if(head==NULL){
		head=ptr;
	}else{
		Node* temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=ptr;
	}
}

void insertPos(int d,int n){
	Node* ptr=new Node();
	ptr->data=d;
	ptr->link=NULL;
	if(n==1){
		ptr->link=head;
		head=ptr;
		return;
	}
	Node* nMinusOneNode=head;
	for(int i=0;i<n-2;i++){
		nMinusOneNode=nMinusOneNode->link;
	}
	ptr->link=nMinusOneNode->link;
	nMinusOneNode->link=ptr;
}

void Display(){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
int main(){
	insertBeg(1);
	insertBeg(2);
	insertBeg(5);
	insertBeg(3);
	insertBeg(4);
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertPos(500,5);
	Display();
}
