/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters 
without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/



class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0;
        int ms = s.length();
        int mt = t.length();
        for(int i=0;i<mt;i++){
            if(t[i]==s[index]){
                index+=1;
            }
            if(index==ms){
                break;
            }
        }
    if(index==ms){
        return 1;
    }
        else{
            return 0;
        }
    }
    
};
