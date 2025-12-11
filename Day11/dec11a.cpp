//LEETCODE: 66. PLUS ONE
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int car=0;
        int n = digits.size();
        vector<int>ans;
        int sum=digits[n-1]+1;
        if(sum>9) car=1;
        ans.push_back(sum%10);
        for(int i=n-2;i>=0;i--){
            ans.push_back((digits[i]+car)%10);
          if(( digits[i]+car)>9) car=1;
          else car=0;
        }
        if(car) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};