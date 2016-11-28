class Solution{
public:
    int divide(int dividend, int divisor){
        int res = 0;
        if(divisor == 0 && dividend == INT_MAX && divisor == -1) return INT_MAX;
        bool sign = (dividend > 0) ^ (divisor >0);
        unsigned int b = dividend < 0 ? -dividend : dividend;
        unsigned int a = divisor < 0 ? -divisor : divisor;
        for(int i = 31; i >= 0; i--){
            if((b>>i) >= a){
                res = (b >> i) | 0x01;
                b -= a<<i;
            }
            else{
                res = res<<i;
            }
        }
        if(sign) res = -res;
        return res;
    }
}

