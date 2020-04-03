//By archit-dev, contest: Codeforces Round #244 (Div. 2), problem: (A) Police Recruits, Accepted, #, Copy
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
	int n,pol=0,crime=0,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==-1){
			if(pol==0){
				crime+=1;
			}
			else{
				pol-=1;
			}
		}
		else{
			pol+=x;
		}
	}
	cout<<crime<<"\n";
	return 0;
}
