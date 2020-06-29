#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <cmath>
#include <climits>
#include <queue>
#include <stack>
#define ll long long

using namespace std;

ll summer(ll low, ll high, vector<ll> &v,vector<ll> &vv){
	if(low==high){
		return vv[low-1];
	}
	else if(low==1){
		return v[high-1];
	}
	else{
		return v[high-1]-v[low-2];
	}
}
 
int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin>>n;
	vector <ll> v1,v2;
	for(int i=0;i<n;i++){
		ll c;
		cin>>c;
		v1.push_back(c);
		v2.push_back(c);
	}
	sort(v2.begin(),v2.end());
	vector<ll> v3(v1),v4(v2);
	//calculating prefix sum for both arr
	ll sum =v1[0];
	for(int i=1;i<n;i++){
		sum+=v1[i];
		v1[i]=sum;
		// sum=v1[i];
	}
	sum =v2[0];
	for(int i=1;i<n;i++){
		sum+=v2[i];
		v2[i]=sum;
	}
	int m;
	cin>>m;
	
	for(int i=0;i<m;i++){
		ll type,low,hi;
		cin>>type>>low>>hi;
		if(type==1){
			cout<<summer(low,hi,v1,v3)<<endl;
		}
		else{
			cout<<summer(low,hi,v2,v4)<<endl;
		}	
	}
	return 0;
}
