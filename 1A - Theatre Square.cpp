#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    double n,m,a,no_of_tiles;
    cin>>n>>m>>a;
    no_of_tiles=ceil(n/a)*ceil(m/a);
    cout<<fixed<<setprecision(0)<<no_of_tiles<<"\n";
    return 0;
}
