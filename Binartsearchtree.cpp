#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// node 
struct Node{
	int data;
	Node* left;
	Node* right;
};
//for creating new node
Node* newNode(int data){
	Node* newNode=new Node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

//inserting node and returning pointer of the new node 
Node* insert(Node* root,int data){
	if(root==NULL){
		root=newNode(data);
	}else if(data<=root->data){
		root->left=insert(root->left,data);
    }else{
    	root->right=insert(root->right,data);
	}
	
	return root;
}
//seraching for the node is present or not and return bool
bool search(Node*root,int data){
	if(root==NULL){
		return false;
	}else if(root->data==data){
		return true;
	}else if(data<=root->data){
		return search(root->left,data);
	}else{
		return search(root->right,data);
	}
}

//drive code
int main(){
	//it means that Node* rootpointer=NULL; it is not root node
	Node* root=NULL;
	//here insert is returning pointer of the node
  root=insert(root,20);
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,10);
	//checking is the element present in the tree
	int number;
	cout<<"enter the number to search it is prsent or not"<<endl;
	cin>>number;
	if(search(root,number)==true){
		cout<<"found"<<endl;
	}else{
		cout<<"NOT FOUND"<<endl;
	}
}
