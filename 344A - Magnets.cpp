//By archit-dev, contest: Codeforces Round #200 (Div. 2), problem: (A) Magnets, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	string mag;
	char prev;
	int groups=1;
	for(int i=0;i<n;i++){
		cin>>mag;
		if(prev==mag[0]){
			groups++;
		}
		prev=mag[1];
	}
	cout<<groups<<"\n";
	return 0;
}
