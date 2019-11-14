#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int selectionSort(int arr[],int n){
	int i,j,ind_min;
	for(i=0;i<n-1;i++){
		ind_min=i;
		for(j=i+1;j<n;j++){
			if(arr[ind_min]>arr[j]){
				ind_min=j;
			}
		}
		swap(&arr[ind_min],&arr[i]);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int * arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionSort(arr,n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
