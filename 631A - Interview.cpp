#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <cmath>
#include <climits>
#include <queue>
#include <stack>
#include <ctype.h>
#include <set>
#include <unordered_map>
#define ll long long
#define pb push_back
#define ArrayMaxLen 100001
#define vi vector<int>
#define vl vector<long long>
#define mod 1000000007
#define MAX 10000001

using namespace std;

void solve();

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
	
	int t=1;
	// cin>>t; 
	while(t--){
		solve();
	}
	return 0;
}

string  keypadCodes[] ={".;","abc", "def" ,"ghi","jkl","mno","pqrs","tu","vwx","yz"} ;

#define ppp pair<int,pair<int,int > >


void solve(){
	int n;
	cin>>n;
	vector<int> v1,v2;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v1.pb(x);
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v2.pb(x);
	}
	unsigned ll ans = 0; 
	// cout<<ans<<"\n";
	unsigned ll temp1 =0;
	unsigned ll temp2= 0;

	for(int i=0;i<n;i++){
		temp1 = temp1 | v1[i];
		temp2 = temp2 | v2[i];
	}
	ans = temp1+temp2;
	cout<<ans<<'\n';
}
