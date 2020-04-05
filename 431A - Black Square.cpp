//By archit-dev, contest: Codeforces Round #247 (Div. 2), problem: (A) Black Square, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
  
int search(int arr[],int key){
	switch(key){
		case '1':return arr[0];
		case '2': return arr[1];
		case '3': return arr[2];
		case '4': return arr [3];
		}
	return -1;
}
 
int main(){
	int x;
	int arr[4];
	for(int i=0;i<4;i++){
		cin>>x;
		arr[i]=x;
	}
	string s;
	cin>>s;
	x=0;
	for(int i=0;i<s.size();i++){
		x+=search(arr,s[i]);
	}
	cout<<x<<endl;
	return 0;
}
