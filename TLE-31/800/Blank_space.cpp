#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        vector<int> v(n) ;
        vector<int> zero ;
        int count = 0 ;
        int max_count = 0 ;
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
            if(v[i]==0){
                count++ ;
                if(count> max_count){
                    max_count = count ;
                }
            }
            else{
                count =0 ;
            }
        }
        cout<<max_count<<endl ;
    }
    return 0 ;
}