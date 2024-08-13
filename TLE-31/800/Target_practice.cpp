#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        // char ar[10][10] ;
        vector<vector<char>> ar(10 , vector<char>(10)) ; 
        int n = 10 ;
        for(int i=0 ;i<10 ;i++){
            for(int j=0 ;j<10 ;j++){
                cin>>ar[i][j] ;
            }
        }
        int score = 0 ;
        for(int i=0 ;i<10 ;i++){
            for(int j=0 ;j<10 ;j++){
                if(ar[i][j] == 'X' && (i==0 || i==n-1 || j==0 || j==n-1)){
                    score+= 1 ;
                    ar[i][j] = '1' ;
                }
                if(ar[i][j] == 'X' && (i==1 || i==n-2 || j==1 || j==n-2)){
                    score+= 2 ;
                    ar[i][j] = '2' ;
                }
                if(ar[i][j] == 'X' && (i==2 || i==n-3 || j==2 || j==n-3)){
                    score+= 3 ;
                    ar[i][j] = '3' ;
                }
                if(ar[i][j] == 'X' && (i==3 || i==n-4 || j==3 || j==n-4)){
                    score+= 4 ;
                    ar[i][j] = '4' ;
                }
                if(ar[i][j] == 'X' && (i==4 || i==n-5 || j==4 || j==n-5)){
                    score+= 5 ;
                    ar[i][j] = '5' ;
                }
            }
        }
        cout<<score<<endl ;
    }
    return 0 ;
}


