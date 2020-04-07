//By archit-dev, contest: Codeforces Round #377 (Div. 2), problem: (A) Buy a Shovel, Accepted, #, Copy

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
	int k,x;
	cin>>k>>x;
	int i=1;
	while(true){
		int counter=i*k;
		if(counter%10==0||(counter-x)%10==0){
			cout<<i<<endl;
			break;
		}
		i++;
	}
	return 0;	
}	
