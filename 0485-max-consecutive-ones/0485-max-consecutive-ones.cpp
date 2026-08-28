class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxones=0; int currmax=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currmax++;
                maxones=max(maxones,currmax);
            }
            else{
                maxones=max(maxones,currmax);
                currmax=0;
            }
        }
    return maxones;
        
    }
};