#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n,m;
    cin>>n>>m;
    vector <int> v;
    for(int i=0;i<n;i++){
    	int x;
    	cin>>x;
    	v.push_back(x);
    }
    int lowPtr=m-2,highPtr=m,count=0;
    if(v[m-1]==1){
    	count+=1;
    }
    while(lowPtr>=0 && highPtr <n){
    	if(v[lowPtr]==1 && v[highPtr]==1){
    		count+=2;
    	}
    	lowPtr-=1;
    	highPtr+=1;
    }
    while(lowPtr >= 0){
    	if(v[lowPtr]==1){
    		count+=1;
    	}
    	lowPtr-=1;
    }
    while(highPtr < n){
    	if(v[highPtr]==1){
    		count+=1;
    	}
    	highPtr+=1;
    }
    cout<<count<<endl;
	return 0;
}
