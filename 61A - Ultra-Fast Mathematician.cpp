//By archit-dev, contest: Codeforces Beta Round #57 (Div. 2), problem: (A) Ultra-Fast Mathematician, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int arr[s1.size()];
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]){
			arr[i]=1;
		}
		else{
			arr[i]=0;
		}
	}
	for(int i=0;i<s1.size();i++){
		cout<<arr[i];
	}
	cout<<"\n";
    return 0;
} 
