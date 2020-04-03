//By archit-dev, contest: Codeforces Round #405 (rated, Div. 2, based on VK Cup 2017 Round 1), problem: (A) Bear and Big Brother, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	 
	int a,b,count=0;
	cin>>a>>b;
	while(a<=b){
		count++;
		a*=3;
		b*=2;
	}
	cout<<count<<"\n";
	return 0;
}
