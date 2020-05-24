#include <bits/stdc++.h>
using namespace  std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=0,sum=0,maxSum=0,minIndex=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxSum=sum;
    for(end=k;end<n;end++){
        sum-=arr[start];
        start+=1;
        sum+=arr[end];
        if(maxSum>sum){
            maxSum=sum;
            minIndex=start;
        }
    }
    cout<<minIndex+1<<"\n";
    return 0;
}
