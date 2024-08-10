#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        int xc ,yc ,k ;
        cin>>xc>>yc>>k ;
        int a = 1 ;
        int b= 1;
        int ansx = xc*k ;
        int ansy = yc*k ;
        int sum_a = 1;
        int sum_b =1 ;
        while(k--){
            if(k==0){
                int xx = ansx - sum_a ;
                int yy = ansy - sum_b ;
                cout<<xx<<" "<<yy<<endl ;
                break ;
            }
            cout<<a<<" "<<b<<endl ;
            
            if(k!=1){
                a = a+1 ;
                b = b+1 ;
                sum_a += a ;
                sum_b += b ;
            }
        }
    }
    return 0 ;
}