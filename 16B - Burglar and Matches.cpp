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

    int n,m;
    cin>>n>>m;
    vector < pair<int,int> > v;
    for(int i=0;i<m;i++){
    	int a,b;
    	cin>>a>>b;
    	v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int c=n;
    long long matches=0;
    for(int i=m-1;i>=0;i--){
    	int q = v[i].second;
    	c = min( q , n);
    	n-=c;
    	matches+= c*v[i].first;
    	if(n==0){
    		break;
    	}
    }
    cout<<matches<<endl;
	return 0;
}
