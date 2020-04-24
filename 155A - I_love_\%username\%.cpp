//By archit-dev, contest: Codeforces Round #109 (Div. 2), problem: (A) I_love_\%username\%, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n;
	cin>>n;
	int change=0,point=0;
	cin>>point;
	int max=point,min=point;
	for(int i=1;i<n;i++){
		cin>>point;
		if(max<point){
			max=point;
			change+=1;
		}
		if(min>point){
			min=point;
			change+=1;
		}
	}
	cout<<change<<"\n";
    return 0;
} 
