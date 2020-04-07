//By archit-dev, contest: Codeforces Round #376 (Div. 2), problem: (A) Night at the Museum, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
	string s; 
	cin>>s;
	int count=0;
	int pt='a';
	for(int i=0;i<s.size();i++){
		int x=abs(pt-s[i]);
		int y = 26-abs(pt-s[i]);
		count+=min(x,y);
		pt=s[i];
	}
	cout<<count<<endl;
	return 0;	
}
