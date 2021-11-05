#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<1<<"\n";
        }else if(n==3){
            cout<<7<<"\n";
        }else{
            string s = "";
            int temp = n/2;
            int rem = n%2;
            if(rem==1){
                s+= to_string(7);
                temp-=1;
            }
            for(int i=0;i<temp;i++){
                s+= to_string(1);
            }
            cout<<s<<"\n";
        }
    }
    return 0;
}
