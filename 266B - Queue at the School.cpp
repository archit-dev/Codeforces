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
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--){
		for(int i=0;i<s.size()-1;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i+=1;
			}
		}
	}
	cout<<s<<"\n";
	return 0;
}
