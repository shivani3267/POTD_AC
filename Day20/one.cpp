//LEETCODE:- COUNT PRIMES
class Solution {
public:
//nloglogn -SEIVE OF EratosthenesES
    int countPrimes(int n) {
        int cnt=0;
        if(n<=2) return 0;
        vector<bool>p(n+1,true);
        p[0]=false,p[1]=false;

        for(int i=2;i<n;i++){
            if(p[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i) p[j]=0;
            }
        }
        return cnt;
    }
};