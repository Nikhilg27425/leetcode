#include<bits/stdc++.h>
using namespace std ;

int  main(){
    long long int t ;
    cin>>t ;
    while(t--){
        long long int  n,m ;
        cin>>n>>m ;
        string a,b ;
        cin>>a>>b ;
        if(a.find(b) != string::npos){
            cout<<0<<endl ;
        }
        else{
            long long int  i=1 ;
            while(i!=6){
                a += a ;
                if(a.find(b) != string::npos){
                    cout<<i<<endl ;
                    break ;
                }
                i++ ;
            }
            if(i>=6){
                cout<<"-1"<<endl ;
            }
        }
    }
    return 0 ;
}




