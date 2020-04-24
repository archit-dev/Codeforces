//By archit-dev, contest: Codeforces Round #126 (Div. 2), problem: (B) Drinks, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
using namespace std;
 
int main(){
	double num=0.00000,den=0.00000;
	int n;
	cin>>n;
	den=n*100;
	for (int i = 0; i < n; i++)
	{
		double x;
		cin>>x;
		num+=x;
	}
	cout<<fixed<<setprecision(6)<<((num/den)*100)<<"\n";
    return 0;
} 
