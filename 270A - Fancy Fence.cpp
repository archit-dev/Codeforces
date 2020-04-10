//By archit-dev, contest: Codeforces Round #165 (Div. 2), problem: (A) Fancy Fence, Accepted, #, Copy
 
#include <iostream>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t!=0){
		int a,i=3;
		cin>>a;
		int n=360%(180-a);
		if(n==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		t--;
	}
	return 0;
}
