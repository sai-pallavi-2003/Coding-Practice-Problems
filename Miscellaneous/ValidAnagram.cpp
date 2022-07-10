/* Given two strings s1 and s2, return true if s2 is an anagram of s1, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

return 1 if true or 0 if false.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string s1, string s2){
//CODE HERE 
int n1=s1.size();
int n2=s2.size();
if(n1!=n2){
    return false;
}
int i,j;
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
for(i=0;i<n1;i++){
    if(s1[i]!=s2[i]){
        return 0;
    }
}
return 1;
}
int main(){
   cout<<"answer:  "<<solve("cat","rac");
}
