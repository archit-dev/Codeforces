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
	cin>>t; 
	while(t--){
		solve();
	}
	return 0;
}

string  keypadCodes[] ={".;","abc", "def" ,"ghi","jkl","mno","pqrs","tu","vwx","yz"} ;

#define ppp pair<int,pair<int,int > >

void solve(){
	//bare mini : koi 2 equal hoga;
	//agar no at least 2 euqal , -1
	//else
	//mark it as b
	//check remaining 2
	//if sum is euqual , then mark it yes;
	bool issq= false;
	int a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		if(b1+b2==a1)
			issq=true;
		

	} if(a1==b2){

		if(b1+a2==a1)
			issq=true;

	} if(b1==a2){
		if(a1+b2==a2)
			issq=true;

	} if(b1==b2){
		if(a1+a2==b1)
			issq=true;
	}
	if(issq)
	{
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
}










