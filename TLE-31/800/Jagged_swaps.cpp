#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while (t--)
    {
        int n ;
        cin>>n ;
        int input_arr[n] ;
        for(int i=0 ;i<n ;i++){
            cin>>input_arr[i] ;
        }
        
        if(input_arr[0]==1){
            cout<<"YES"<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
        }
    }
    return 0 ;
}

