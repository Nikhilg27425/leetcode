#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        vector<int> v(n) ;
        int minus_count = 0 ;
        int plus_count = 0 ;
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
            if(v[i]==1){
                plus_count++ ;
            }
            else{
                minus_count++ ;
            }
        }
        int steps = 0 ;
        while(((minus_count%2!=0) || (minus_count > plus_count)) && minus_count>=0){
            minus_count-- ;
            plus_count++ ;
            steps++ ;
        }
        cout<<steps<<endl ;
    }
    return 0 ;
}







