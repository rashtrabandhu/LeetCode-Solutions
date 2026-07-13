class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid=0;
        int left=1;
        int right =arr.size()-2;

        while(left<=right){
           mid=left + (right-left)/2;

            if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
                return mid;

            }
            else if(arr[mid-1]<arr[mid]){
                left=mid+1;
}

            else{
                right=mid-1;
            }
            

        }
        return -1;
        
    }
};