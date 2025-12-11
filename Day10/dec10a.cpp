//LEETCODE: 415
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int n=num1.size();
        int m=num2.size();
        int i=n-1,j=m-1;
        int carr = 0;
        while(i>=0 && j>=0){
            int add=(num1[i] - '0') + (num2[j] - '0' ) + carr;
            carr=add/10;
            add = add%10;
            ans.push_back(add + '0');
            i--;
            j--;
        }
        while(i>=0){
            int add=(num1[i] - '0')+ carr;
            carr=add/10;
            add = add%10;
            ans.push_back(add + '0');
            i--;
        }
        while(j>=0){
            int add= (num2[j] - '0' ) + carr;
            carr=add/10;
            add = add%10;
            ans.push_back(add + '0');
            j--;
        }
        if(carr) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};