//LEETCODE:- 3163. String Compression III

//follow whatever asked 

class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int i=0;
        int n=word.size();
        while(i<n){
            int cnt=1;
            while(word[i]==word[i+1] && cnt< 9 && i<n-1){
                i++;
                cnt++;
            }
            ans += to_string(cnt) + word[i];
            i++;
        }
        return ans;
    }
};