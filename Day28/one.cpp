//LEETCODE: 239. SLIDING WINDOW MAXIMUM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        int i=0;
        while(i<k){
            pq.push({nums[i],i});
            i++;
        }

        ans.push_back(pq.top().first);
        while(i<n){
            pq.push({nums[i],i});
            while(pq.top().second <= i-k){
                pq.pop();
            }
            ans.push_back(pq.top().first);
            i++;
        }
        return ans;

    }
};