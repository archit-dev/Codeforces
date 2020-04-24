//By archit-dev, contest: Codeforces Round #103 (Div. 2), problem: (A) Arrival of the General, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
int min(int arr[],int n){
	int minn=arr[n-1],min_index=n-1;
	for(int i=n-2;i>=0;i--){
		if(arr[i]<minn){
			minn=arr[i];
			min_index=i;
		}
	}
	return min_index+1;
}
 
int max(int arr[],int n){
	int maxn=arr[0],max_index=0;
	for (int i = 1; i < n; i++)
	{
		if(arr[i]>maxn){
			maxn=arr[i];
			max_index=i;
		}
	}
	return max_index+1;
}
 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int ma=max(arr,n),mi=min(arr,n);
	int res=ma-1+n-mi;
	if(ma>mi){
		res-=1;
	}
	cout<<res<<"\n";
    return 0;
} 
