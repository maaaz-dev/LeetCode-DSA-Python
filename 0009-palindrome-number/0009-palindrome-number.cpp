class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long int sum=0;
        while(n>0){
            int z=n%10;
            sum=(sum*10)+z;
            n=n/10;
        }
        if(sum==x){
            return true;
        }else{
            return false;
        }
    }
};