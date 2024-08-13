#include<iostream>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int a,b,c ;
        cin>>a>>b>>c ;
        int decider = (c/2 + c%2) ;
        int anna = a + decider ;
        int katie = b + c - decider ;
        if(anna>katie){
            cout<<"First"<<endl ;
        }
        else{
            cout<<"Second"<<endl ;
        }
    }
    return 0;
}