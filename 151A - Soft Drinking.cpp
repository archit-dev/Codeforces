//By archit-dev, contest: Codeforces Round #107 (Div. 2), problem: (A) Soft Drinking, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink_amt=k*l,n_slices=d*c;
	cout<<min(drink_amt/nl,min(n_slices/1,p/np))/n<<"\n";
    return 0;
} 
