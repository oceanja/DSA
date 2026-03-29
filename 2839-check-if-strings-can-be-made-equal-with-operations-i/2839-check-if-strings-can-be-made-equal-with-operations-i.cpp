class Solution {
public:
    bool canBeEqual(string s1, string s2) {
      // two strings s1 and s2, both of length 4, consisting of lowercase English letters.
      // Choose any two indices i and j such that j - i = 2, then swap the two characters at those indices in the string.
      //  true if you can make the strings s1 and s2 equal, and false otherwise.

      // s1 = "abcd", s2 = "cdab"

      //  s1 = "abcd", s2 = "dacb"
      //. s1= dbca ,
      // 0,1,2,3

      if(s1==s2){
        return true;
      }
      else{
        swap(s1[0],s1[2]);
        if(s1==s2){
        return true;
      }
       else swap(s1[0],s1[2]);
       swap(s1[1],s1[3]);
      if(s1==s2){
        return true;
      }
      else  swap(s1[1],s1[3]);

      swap(s1[0],s1[2]);
      swap(s1[1],s1[3]);

      if(s1==s2){
        return true;
      }







      }
      return false;

    }
};