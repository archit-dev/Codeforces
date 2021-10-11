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
	vector<int> odd;
	vector<int>even;
	ll sum = 0;
	while(n--){
		int x;
		cin>>x;
		sum+=x;
		if(x%2==0){
			even.pb(x);
		}
		else{
			odd.pb(x);
		}
	}

	if(odd.size()==even.size() || abs((int)odd.size()-(int)even.size())==1){
		cout<<"0\n";
	}else{

		sort(odd.rbegin(),odd.rend());
		sort(even.rbegin(),even.rend());
		int k = min((int)odd.size(),(int)even.size());
		int temp = k;
		for(int x:odd){
			if(temp==0){
				break;
			}
			sum-=x;
			temp--;
			
		}
		temp =k;
		for(int x:even){
			if(temp==0){
				break;
			}
			sum-=x;
			temp--;
			
		}
		if(odd.size()>even.size()){
			sum-=odd[k];
		}else{
			sum-=even[k];
		}
		cout<<sum<<"\n";
	}
}
