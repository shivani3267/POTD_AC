//GFG:- Strings Rotations of Each Other

class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        if(s1.size() != s2.size()) return 0;
        string temp = s1+s1;
       return temp.find(s2) != string::npos;
    }
};