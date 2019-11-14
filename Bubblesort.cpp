#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	}

int bubbleSort(int arr[],int n){
 int j,i;
    for(i=0;i<n-1;i++){
 	for(j=0;j<n-i-1;j++){
 		if(arr[j]>arr[j+1]){
 			swap(&arr[j],&arr[j+1]);
		    }
	    }
    }
}

int print(int arr[],int n){
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }
}
int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubbleSort(arr,n);
    cout<<"type 1"<<endl;
	print(arr,n);
	cout<<"\n";
    cout<<"type 2"<<endl;   
//	print this way or above way both works
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
    }

	
}
