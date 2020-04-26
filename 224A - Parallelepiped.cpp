#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
#define ull unsigned long long int 
#define pb push_back


using namespace std;
 
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int l=sqrt((x*z)/y);
    int b=x/l,h=z/l;
    cout<<4*(l+b+h)<<"\n";
    return 0;

} 
