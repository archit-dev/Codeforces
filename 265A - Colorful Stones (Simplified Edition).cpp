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

    string s1,s2;
    cin>>s1>>s2;
    int x=1;
    for (int i = 0 ; i< s2.size() ;i++){
    	if(s1[x-1]==s2[i]){
    		x+=1;
    	}
    }
    cout<<x<<endl;
	return 0;
}
