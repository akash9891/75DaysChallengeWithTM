class Solution {
public:
    double myPow(double x, int n) {
        
        double res = 1;
        if(x == 1) return x;
         n<0 ? x=1/x , n = abs(n) : 1;
      
        double tmp = 0.0;
        while(n)
        {
            tmp = res;
            if(n&1)
            { 
                res *= x;
                if(tmp == res) return res;
            }
              x *=x;
              n = n>>1;
                 
        }
        return res;
    }
};