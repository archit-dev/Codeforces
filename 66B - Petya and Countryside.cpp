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

    int n;
    cin>>n;
    std::vector<int> v;
    for(int i=0 ; i < n;i++){
    	int x;
    	cin>>x;
    	v.push_back(x);
    }
    int c=INT_MIN,m=1;
    for( int i = 0 ; i<n;i++){
    	int j=i-1,k=i+1;
    	int al=v[i],bl=v[i];
    	while(j>=0){
    		if(v[j]<=al){
    			al=v[j];
    			m+=1;
    			j--;
    		}
    		else{
    			break;
    		}
    	}
    	while(k<n){
    		if(v[k]<=bl){
    			bl=v[k];
    			m+=1;
    			k++;
    		}
    		else{
    			break;
    		}
    	}
    	c = max(c,m);
    	m=1;
    }
    cout<<c<<endl;
	return 0;
}
