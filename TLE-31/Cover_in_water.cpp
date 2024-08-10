#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        int hash_count =0 ;
        int dot_count = 0 ;
        for(int i=0 ;i<s.size();i++){
            if(s[i] == '.'){
                dot_count++ ;
            }
            else{
                hash_count++ ;
            }
        }
        if(hash_count == s.size()){
            cout<<"0"<<endl ;
        }
        else{
            int cons_drop  =0 ;
            for(int i=0 ;i<s.size();i++){
                if(s[i] == '.' && s[i+1] =='.' && s[i+2] =='.'){
                    cons_drop++ ;
                }
            }
            if(cons_drop>0){
                cout<<2<<endl ;
            }
            else{
                cout<<dot_count<<endl ;
            }
        }
    }
    return 0 ;
}
