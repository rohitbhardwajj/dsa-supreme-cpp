class Solution {
public:
    int bitwiseComplement(int n) {
        int pow=1,ans=0;
       if(n==0) return 1;
        while(n>0){
           int binary = !(n % 2);
            ans+= binary*pow;
            pow*=2;
            n/=2;
        }
        return ans;
    }
};