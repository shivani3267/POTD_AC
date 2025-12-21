//LEETCODE:- 1518. Water Bottles

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int empbot=numBottles;
        while(empbot>=numExchange){
            ans+= empbot/numExchange;
            empbot = (empbot/numExchange) + empbot%numExchange;
        }
        return ans;
    }
};