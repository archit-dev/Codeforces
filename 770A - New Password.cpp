//By archit-dev, contest: VK Cup 2017 - Qualification 2, problem: (A) New Password, Accepted, #, Copy
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
	int n,k;
	cin>>n>>k;
	char a=97;
	char s[100];
	int i=0;
	int flag=0;
	while(i<n){
	    s[i]=a;
	    a+=1;
	    if(flag==k-1){
	        a=97;
	        flag=0;
	        i+=1;
	    }
	    else{
    	    flag++;
    	    i+=1;
	    }
	}
	for(int i=0;i<n;i++){
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
