#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int n;
        cin>>n ;
        vector<int> v(n) ;
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
        }
        if(n%2==0){
            int x_o_r_1 = v[0];
            for(int i=1 ;i<n ;i++){
                x_o_r_1 = x_o_r_1^v[i] ;
            }
            if(x_o_r_1==0){
                cout<<"1"<<endl ;
            }
            else{
                cout<<"-1"<<endl ;
            }
        }
        else{
            int x_o_r_2 = v[0];
            for(int i=1 ;i<n ;i++){
                x_o_r_2 ^= v[i] ;
            }
            cout<<x_o_r_2<<endl ;
        }
    }
    return 0 ;
}




