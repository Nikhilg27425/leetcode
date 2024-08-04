// You are given two strings word1 and word2. 
// Merge the strings by adding letters in alternating order, starting with word1.
//  If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r

//my solution
#include<iostream>
using namespace std ;

string mergeAlternately(string word1, string word2) {
    int len1 = word1.size() ;
    int len2 = word2.size() ;
    int index = len1 - len2 ;
    // if(index<0){
    //     index *= (-1) ;
    // } ;
    int id =len2  ;
    if(index<0){
        id = len1 ;
    }
    string ans  ;

    if(index==0){
        for(int i=0 ;i<len1;i++){
            ans+=word1[i] ;
            ans+=word2[i] ;
        }
        return ans ;
    }

    int p = 0 ;
    for(int i=0 ;i<id;i++){
        ans+=word1[i] ;
        ans+=word2[i] ;
        p++ ;
    }

    if(len1>len2){
        for(int i=p ;i<len1;i++){
            ans+=word1[i] ;
        }
    }
    else{
        for(int i=p ;i<len2;i++){
            ans+=word2[i] ;
        }
    }
    return ans ;
}

//better solution

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                result += word1[i];
            }
            if (i < word2.length()) {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};