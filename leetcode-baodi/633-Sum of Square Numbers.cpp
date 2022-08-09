// 0ms 100%

class Solution {
public:
    bool judgeSquareSum(int c) {
        int s = sqrt(c);
        
        int i = 0;
        while(i<=s)
        {
            if(INT_MAX - s*s < i*i || i*i + s*s > c)
            {
                s--;
            }
            else if(i*i + s*s == c || i*i*2 == c)
            {
                return true;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};