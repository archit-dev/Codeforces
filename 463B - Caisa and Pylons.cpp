#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin>>n;
    int x=INT_MIN;
    for(int i = 0 ; i<n;i++){
    	int  a;
    	cin>>a;
    	x=max(a,x);
    }
    cout<<x<<endl;
	return 0;
}
