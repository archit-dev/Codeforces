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
	//odd no of odds = > odd rahega
	// even number of odds hona chahiye
	//s[n-1] %2 !=0
	//no of even 6+6+6+ 5+ 1+ 1


	//first remove all the even nos.
	// if odd %2== 0  ==> remove 1 odd no.

	int n;
	cin>>n;
	string s;
	cin>>s;
	string ans;
	int odd = 0 ;
	for(int i =0 ;i<n;i++){
		int curr = s[i]-'0';
		if(curr%2!=0){
			odd++;
			ans+=s[i];
		}
	}
	if(odd==0){
		cout<<"-1\n";
	}
	else if(odd%2==0){
		cout<<ans<<"\n";
	}else{
		ans.pop_back();
		if(ans.size()==0){
			cout<<"-1\n";
		}
		else{
			cout<<ans<<"\n";
		}
		
	}


}





