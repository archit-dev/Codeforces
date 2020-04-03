//By archit-dev, contest: Codeforces Beta Round #55 (Div. 2), problem: (A) Word, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
	string exp;
	cin>>exp;
	int low=0,up=0;
	for(int i=0;i<exp.size();i++){
		if(exp[i]>=97){
			low+=1;
		}
		else{
			up+=1;
		}
	}
 
	if(low>=up){
		for(int i=0;i<exp.size();i++){
			if(exp[i]>=97){
				continue;
			}
			else{
				exp[i]=exp[i]+32;
			}
		}
	}
 
	else{
		for(int i=0;i<exp.size();i++){
			if(exp[i]<97){
				continue;
			}
			else{
				exp[i]=exp[i]-32;
			}
		}
	}
	cout<<exp<<"\n";
	return 0;
}
