//By archit-dev, contest: Codeforces Round #355 (Div. 2), problem: (A) Vanya and Fence, Accepted, #, Copy

#include <iostream>

using namespace std;
 
int main(){
 
	int n,h,x,count=0;
	cin>>n>>h;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>h){
			count+=2;
		}
		else count+=1;
	}
	cout<<count<<"\n";
	return 0;
}
