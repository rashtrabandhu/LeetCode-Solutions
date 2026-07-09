class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0)
    return false;

        int original=x;
long long c=0;
        while(x>0){
           int  r=x%10;
            c=c*10+r;
            x=x/10;

            
        }

    if(c==original)
     return true;
     return false;
     
        
    }
};