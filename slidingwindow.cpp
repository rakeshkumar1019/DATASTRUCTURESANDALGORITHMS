#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter n value(size)"<<endl;
	cin>>n;
//	int array[n]={1,3,-1,-3,5,3,6,7};
int array[n];
cout<<"enter array value "<<endl;
for(int i=0;i<n;i++){
	cin>>array[i];
}
	vector<int> sum(1);
	int count=0;
	int k;
	cout<<"enter k value"<<endl;
	cin>>k;
//	int k=3;
	int sumind=0;
	cout<<"intial sumind"<<sumind<<endl;
	for(int i=0;i<n;i++){
	 count+=array[i];
	 sum[sumind]=count;
	 sumind++;
	}
//     int size=sizeof(sum)/sizeof(sum[0]);

     for(int i=0;i<n;i++){
       	cout<<sum[i]<<" ";
	 }
	 int index=0;
	 int outsiz=n+1-k;
	 int ans[outsiz];
	 ans[0]=sum[2];
	 
	 for(int i=3;i<n;i++){
	 	index++;
	 	cout<<"index"<<index<<endl;
       	ans[index]=sum[i]-sum[i-k];
        cout<<"answer"<<ans[index]<<" ";
	 }
	 for(int i=0;i<outsiz;i++){
	 	cout<<ans[i]<<" ";
	 }
	 
}
