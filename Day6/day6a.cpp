/*1021. Remove Outer Outermost paranthesis*/

class Solution {
public:
    string removeOuterParentheses(string s) {
       int opcnt=0;
       string ans = "";
       for(auto c:s){
          if(c=='('){
            if(opcnt>0) ans+=c;
            opcnt++;
          }
          else{ 
            opcnt--;
            if(opcnt>0) ans+=c;
            }
       }
       return ans;
    }
};