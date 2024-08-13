#include<bits/stdc++.h>
#define int long long 
using namespace std ;

bool round(int n){
    int zeroes = 0;
    while(n!=0){
        int p = n%10 ;
        if(p!=0){
            zeroes++ ;
        }
        n=n/10 ;
    }
    if(zeroes==1){
        return true ;
    }
    else{
        return false ;
    }
}

signed main(){
    int t ;
    cin>>t ;
    vector<int> if_round(1000000) ;

    for(int i=0 ;i<if_round.size() ;i++){
        if(round(i)){
            if_round[i] = 1 ;
        }
        else{
            if_round[i] =0 ;
        }
    }

    for(int i=1 ;i<if_round.size() ;i++){
        if_round[i] = if_round[i] + if_round[i-1] ;
    }

    while(t--){
        int n ;
        cin>>n ;
        cout<<if_round[n]<<endl ;
    }
    return 0 ;
}
