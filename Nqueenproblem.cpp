//N-Queen Problem
//Send Feedback
//You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board. A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.
//Input Format :
//Line 1 : Integer N
//Output Format :
//One Line for every board configuration. 
//Every line will have N*N board elements printed row wise and are separated by space
//Note : Don't print anything if there isn't any valid configuration.
//Constraints :
//1<=N<=10
//Sample Input 1:
//4
//Sample Output 1 :
//0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
//0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0





#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int board[11][11];

bool isPossible(int n,int row,int column){
	//for same  column
	for(int i=row-1;i>=0;i--){
		if(board[i][column]==1){
			return false;
		}
	}
	//for upper right diagnol
	for(int i=row-1,j=column+1; i>=0 && j<n;i--,j++){
		if(board[i][j]==1){
			return false;
		}
	}
	//for lower left diagnol
	for(int i=row-1,j=column-1; i>=0 && j>=0; i--,j--){
		if(board[i][j]==1){
			return false;
		}
	}
	return true;
}

void Nqueenhelper(int n,int row){
	// We have reached some solution.
    // Print the board matrix
    // return

	if(row==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
//			cout<<endl;
		}
		cout<<endl;
		return;
	}
	
	 // Place at all possible positions and move to smaller problem
	 
	 for(int j=0;j<n;j++){
	 	if(isPossible(n,row,j)){
	 		board[row][j]=1;
	 		Nqueenhelper(n,row+1);
	 		board[row][j]=0;
		 }
	 }
	 return;
	

}

	void Nqueenfind(int n){
		memset(board,0,11*11*sizeof(int));
		Nqueenhelper(n,0);
	}
int main(){

	Nqueenfind(4);
	return 0;
}
