#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int dec_factor = n%3 ;
        if(dec_factor==0){
            cout<<"Second"<<endl ;
        }
        else{
            cout<<"First"<<endl ;
        }
    }
    return 0 ;
}
