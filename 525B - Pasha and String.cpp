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
#define ll long long

using namespace std;

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


	string s;
	cin>>s;
	int n;
	cin>>n;
	vector <int> flips (s.size(),0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		flips.at(x-1)+=1;
	}
	for(int i=1;i<s.size()/2;i++){
		flips[i]+=flips[i-1];
	}
	for(int i=0;i<s.size()/2;i++){
		if(flips[i]%2!=0){
			swap(s[i],s[s.size()-i-1]);
		}
	}
	cout<<s<<endl;
	return 0;
}
