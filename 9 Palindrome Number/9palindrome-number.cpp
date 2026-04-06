class Solution {
public:
    bool isPalindrome(int x) {
        int copyx = x;
        long reverseX =0;
        while(x>0){
            int ld = x%10;
            reverseX = (reverseX*10) +ld;
            x = x/10;
        }
        if(reverseX == copyx) return true;
        else return false;
    }
};