//By archit-dev, contest: Codeforces Round #379 (Div. 2), problem: (A) Anton and Danik, Accepted, #, Copy

#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	int n,anton=0,danik=0;
	cin>>n;
	char s[n];
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		if (s[i]=='A')
			anton++;
		else
			danik++;
	}
	if(anton>danik)
		cout<<"Anton\n";
	else if(danik>anton)
		cout<<"Danik\n";
	else
		cout<<"Friendship\n";
	return 0;
}
