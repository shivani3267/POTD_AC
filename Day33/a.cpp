//GFG: GAME WITH STRING

class Solution {
  public:
    int minValue(string &s, int k) {
       priority_queue<pair<int,char>>pq;
       int ans=0;
       vector<int>a(26,0);
       for(auto c:s) a[c-'a']++;
       
       for(int i=0;i<26;i++){
           if(a[i]!=0) pq.push({a[i],'a'+i});
       }
       
       while(k--){
           int cnt = pq.top().first;
           char c = pq.top().second;
           pq.pop();
           if(cnt>1) pq.push({cnt-1,c});
       }
       while(!pq.empty()){
           int sq = pq.top().first;
           pq.pop();
           ans += sq*sq;
       }
       return ans;
       
    }
};