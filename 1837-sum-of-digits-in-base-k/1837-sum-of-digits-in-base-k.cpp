class Solution {
public:
    int sumBase(int n, int k) {

            int r;
            int ans=0;

        while(n>0){
           r= n%k;
           n=n/k;

        ans=ans+r;
        }

        return ans;

        
    }
};