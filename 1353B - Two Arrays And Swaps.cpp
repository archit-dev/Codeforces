#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        int i=0,j=n-1;
        while(k--){
            if(a[j]<b[i]){
                swap(a[j],b[i]);
                j-=1;
                i+=1;
            }
            else{
                break;
            }
        }
        long long sum=0;
        for(auto i:a){
            sum+=i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
