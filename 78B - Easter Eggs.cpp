#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>

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
    string s="VIBGYOR", s1= "VIBGYOR";
    int k=3;
    for(int i=n-7;i>0;i--){
    	s1.push_back(s[k]);
    	k+=1;
    	if(k==7){
    		k=3;
    	}
    }
    cout<<s1<<endl;
	return 0;
}
