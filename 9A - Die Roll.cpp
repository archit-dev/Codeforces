#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int a,b;
    cin>>a>>b;
    int x = max(a,b);
    int count = 6-x+1;
    if(count==3){
    	cout<<"1/2";
    }
    else if(count==6){
    	cout<<"1/1\n";
    }
    else if(count%2==0){
    	cout<<count/2<<"/"<<3<<endl;
    }
    else{
    	cout<<count<<"/6"<<endl;
    }
	return 0;
}
