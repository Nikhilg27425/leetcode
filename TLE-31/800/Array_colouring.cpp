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
        int odd_count =0 ;
        int even_count =0 ;
        for(int i=0 ;i<v.size();i++){
            cin>>v[i] ;
            if(v[i]%2==0){
                even_count++ ;
            }
            else{
                odd_count++ ;
            }
        }
        if(even_count==0 && odd_count%2==0){
            cout<<"YES"<<endl ;
        }
        else if(odd_count%2==0){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}
