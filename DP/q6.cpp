// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     int m;
//     cin>>m;
//     while (m--)
//     {
//         int li,ri;
//         cin>>li>>ri;
//         int cnt=0;
//         for(int i=li-1;i<ri-1;i++){
//             if(str[i]==str[i+1]){
//               cnt++;
//             }
//         }
//         cout<<cnt<<endl;
//     }
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n =str.length();
    vector<int>adjacent(n,0);
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            adjacent[i]=adjacent[i-1]+1;
        }else {
            adjacent[i] = adjacent[i - 1];
        }
    }

    int m;
    cin>>m;
    while (m--)
    {
        int li,ri; // in question it is giving in 1 base indexing 
        cin>>li>>ri;
        int cnt = adjacent[ri-1]-adjacent[li-1];
        cout<<cnt<<endl;
    }
    
}