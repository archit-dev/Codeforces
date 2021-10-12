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
	int toggletimes[5][5];
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			toggletimes[i][j] = 0;
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cin>> toggletimes[i][j];
		}
	}
	int finalans[5][5];
	
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			//self row
			//prevrow
			//next row
			// finalans[i][j] = toggletimes[i][j]+toggletimes[i][j-1]+toggletimes[i][j+1]
			// 					+toggletimes[i-1][j]+toggletimes[i-1][j-1]+toggletimes[i-1][j+1]
			// 					+toggletimes[i+1][j]+toggletimes[i+1][j-1]+toggletimes[i+1][j+1];
			finalans[i][j] =toggletimes[i][j]+ toggletimes[i][j-1]+toggletimes[i][j+1]+toggletimes[i-1][j]+toggletimes[i+1][j];
		}
	}


	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(finalans[i][j] %2 ==0){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		cout<<"\n";
	}
}
