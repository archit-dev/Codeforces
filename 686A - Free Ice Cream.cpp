//By archit-dev, contest: Codeforces Round #359 (Div. 2), problem: (A) Free Ice Cream, Accepted, #, Copy

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
#define ll long long
using namespace std;
 
int main()
{
	int kids,distressed=0;
	ll int init_ice,ice;
	char sign;
	cin>>kids>>init_ice;
	for(int i=0;i<kids;i++){
		cin>>sign;
		cin>>ice;
		if(sign == '+'){
			init_ice+=ice;
		}
		else{
			if(init_ice>=ice){
				init_ice-=ice;
			}
			else{
				distressed+=1;
			}
		}
	}
	cout<<init_ice<<" "<<distressed<<endl;
	return 0;
}
