//By archit-dev, contest: Codeforces Round #223 (Div. 2), problem: (A) Sereja and Dima, Accepted, #, Copy
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
	int n,s=0,d=0,turn=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[i]=x;
	}
	int rear=n-1,front=0;
	while(n!=0){
		if (turn %2 !=0){
			if(arr[front]>arr[rear]){
				s+=arr[front];
				front++;
			}
			else{
				s+=arr[rear];
				rear--;
			}
		}
		else{
			if(arr[front]>arr[rear]){
				d+=arr[front];
				front++;
			}
			else{
				d+=arr[rear];
				rear--;
			}
 
		}
		turn++;
		n--;
	}
	cout<<s<<" "<<d<<"\n";
	return 0;
}
