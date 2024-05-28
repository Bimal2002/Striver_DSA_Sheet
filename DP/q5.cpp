#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int minSum=0;
    int index=0;
    int currSum=0;
    for(int i=0;i<k;i++){
        currSum += height[i];
    }
    minSum = currSum;
    for(int i=k;i<n;i++){
       currSum += height[i]-height[i-k];
       if(currSum<minSum){
        minSum = currSum;
        index = i-k+1;
       }
    }

    cout<<index+1;
}