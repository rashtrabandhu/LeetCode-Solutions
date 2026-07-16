class Solution {
public:
    long long gcdSum(vector<int>& nums) {

                vector<int> prefixgcd;
            int n=nums.size();

            int mx=0;

            for(int i=0;i<n;i++){
                mx =max(mx,nums[i]);
                

                    prefixgcd.push_back(gcd(mx,nums[i]));

            }

        
            sort(prefixgcd.begin(),prefixgcd.end());
            long long ans =0;

            int i=0;
            int j=prefixgcd.size()-1;

            while(i<j){
                ans += gcd(prefixgcd[i],prefixgcd[j]);

                i++;
                j--;
            }

            return ans;





            
       
    }
};