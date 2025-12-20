//LEETCODE:- 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers

class Solution {
public:
    int minPartitions(string n) {
        //observation based how many max times 1 will sum to give max digit
        int ans=0;
        for(auto el:n){
            ans=max(ans,(el-48));
        }
        return ans;
    }
};