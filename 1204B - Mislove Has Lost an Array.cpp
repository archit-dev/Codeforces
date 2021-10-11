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
	int n,l,r;
	cin>>n>>l>>r;
	//calculation of max
	int maxx = 1;
	vector<int> v;
	int r1= r;
	int n1 = n;
	r-=1;
	l-=1;
	while(r>0){
		v.pb(maxx);
		maxx*=2;
		r--;
	}
	while(v.size()!=n1){
		v.pb(maxx);
	}
	int maxians = 0;
	for(auto i :v){
		// cout<<i<<" ";
		maxians+=i;
	}
	// cout<<"\n";
	while(v.size()!=0){
		v.pop_back();
	}
	//calculation of min;
	int minn = 1;
	int l1  = l ;
	while(l1--){
		minn*=2;
	}

	while(minn!=1){
		v.pb(minn);
		minn/=2;
	}
	while(v.size()!=n){
		v.pb(1);
	}

	int minans = 0 ;
	for(int x:v){
		// cout<<x<<" ";
		minans+=x;
	}
	// cout<<"\n";

	cout<<minans<<" "<<maxians<<"\n";

}










