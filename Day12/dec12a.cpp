//LEETCODE :- Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        string temp="";
        string ans=strs[0];
        for(int i=1;i<n;i++){
            temp="";
            for(int j=0;j<strs[i].size();j++){
                if(j<ans.size()){
                    if(ans[j]==strs[i][j]){
                        temp += ans[j];
                    }
                    else break;
                }
            }
            ans=temp;
        }
        return ans;
    }
};