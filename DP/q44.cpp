#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int>&arr,vector<int>&brr){
    int curra=0,currb=0;
    int maxa=0,maxb=0;
    int n=arr.size(),m=brr.size();
    for(int i=0;i<n;i++){
        curra += arr[i];
        // if(curra<0){
        //     curra=0;
        // }
        maxa = max(maxa,curra);
    }
    for(int i=0;i<m;i++){
        currb += brr[i];
        // if(currb<0){
        //     currb=0;
        // }
        maxb = max(maxb,currb);
    }
    return (maxb+maxa);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n,0);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int m;
	    cin>>m;
	    vector<int>brr(m,0);
	    for(int j=0;j<m;j++){
	       cin>>brr[j];
	    }
	    int ans = maxSum(arr,brr);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
