//GFG: Stream First Non-repeating

class Solution {
  public:
    string firstNonRepeating(string &s) {
        string ans = "";
        unordered_map<char,int>mp;
        queue<char>q;
        for(auto c:s){
            mp[c]++;
            q.push(c);
            while(q.size()>0 && mp[q.front()] >1) q.pop();
            ans += q.empty() ? '#' : q.front();
        }
        return ans;
    }
};