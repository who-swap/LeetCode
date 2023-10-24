class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i<=30; i++){
        if((n==pow(2,i)) ){
            return true;
        }
        // else if(n > INT_MAX/10){
        //     cout<<"invalid";
        //     break;
        // }
     }
     return false;
        
    }
};