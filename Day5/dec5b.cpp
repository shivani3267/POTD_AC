/*Leetcode - 2843*/
class Solution {
    bool valid(int n){
        string s = to_string(n);
        if(s.size()%2==1) return 0;
        int left=0,right=0;
        for(int i=0;i<s.size()/2;i++) left += (s[i]-48);
        for(int i=s.size()-1;i>=s.size()/2;i--) right += (s[i]-48);
        return left == right;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            if(valid(i)) cnt++;
        }
        return cnt;
    }
};