#include<bits/stdc++.h>
using namespace std ;

vector<int> swap(int a ,int b){
    vector<int> ans ;
    a = a^b ;
    b = a^b ;
    a = a^b ;
    ans.push_back(a) ;
    ans.push_back(b) ;
    return ans ;
}



int main(){
    vector<int> v ;
    v = swap(2,3) ;
    for(int i=0 ;i<v.size();i++){
        cout<<v[i]<<" " ;
    }
    return 0 ;
}