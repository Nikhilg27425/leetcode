#include<bits/stdc++.h>
using namespace std ;
int  main(){
    long long int t ;
    cin>>t ;
    while(t--){
        long long int n ;
        cin>>n ;
        vector<long long int> ar(n) ;
        for(long long int i=0 ;i<n ;i++){
            cin>>ar[i] ;
        }
        set<long long int> ans ;
        for(long long int i= 0;i<n ;i++){
            ans.insert(ar[i]) ;
        }
        if(ans.size()==2){
            long long int a=-1 ;
            long long int b=-1;
            long long int acount =0 ;
            long long int bcount =0 ;
            for(const long long int &elem :ans ){
                if(a==-1) a = elem ;
                else b=elem ;
            }
            for(long long int i=0 ;i<n ;i++){
                if(ar[i]==a){
                    acount++ ;
                }
                else{
                    bcount++ ;
                }
            }
            long long int diff = acount - bcount ;
            if(diff==0 || diff==1 || diff ==-1){
                cout<<"Yes"<<endl ;
            }
            else{
                cout<<"No"<<endl ;
            }
        }
        else if(ans.size()==1){
            cout<<"Yes"<<endl ;
        }
        else{
            cout<<"No"<<endl ;
        }
    }
    return 0 ;
}
