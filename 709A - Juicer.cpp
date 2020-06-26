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

    int n,b,d;
    cin>>n>>b>>d;
    int count=0,j=0;
    for (int i = 0; i < n; i++)
    {
    	int x;
    	cin>>x;
    	if(x>b){
    		continue;
    	}
    	else{
    		j+=x;
    		if(j>d){
    			j=0;
    			count+=1;
    		}
    	}
    }
    cout<<count<<endl;
	return 0;
}
