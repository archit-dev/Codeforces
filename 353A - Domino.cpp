#include <bits/stdc++.h>
using namespace std;
int main(){
    int num_leftOddRightEven=0;
    int num_leftEvenRightOdd=0;
    int sumleft=0,sumright=0;
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x%2==0 && y%2!=0){
            num_leftEvenRightOdd+=1;
        }
        if(x%2!=0 && y%2==0){
            num_leftOddRightEven+=1;
        }
        sumleft+=x;
        sumright+=y;
        
    }
    
    if(sumleft%2==0 && sumright%2==0){
        cout<<"0\n";
    }
    else if(sumleft%2!=0 && sumright%2!=0){
        if(num_leftOddRightEven||num_leftEvenRightOdd){
            cout<<"1\n";
        }
        else{
            cout<<"-1\n";
        }
    }
    else{
        cout<<"-1\n";
    }
    return 0;
}
