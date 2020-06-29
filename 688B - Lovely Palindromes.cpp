#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<s;
    for(long long i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
