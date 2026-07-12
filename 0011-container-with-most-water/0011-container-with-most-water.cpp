class Solution {
public:
    int maxArea(vector<int>& height) {

        int lp=0;
        int rp=height.size()-1;
        int maxwt=0;

        while(lp<rp){
            int wt=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwt=wt*ht;

             maxwt=max(maxwt,currwt);

        height[lp]<height[rp]?lp++:rp--;
        }
        return maxwt;
    }
};