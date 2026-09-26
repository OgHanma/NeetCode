class Solution {
public:
    int climbStairs(int n) {
        int t1 = 1;
        int t2 = 2;
        if(n<=0)    return -1;
        if(n==1)    return t1;
        if(n==2)    return t2;
        for(int i = 3 ; i <= n ;i++){
            int steps = t1+t2;
            t1=t2;
            t2=steps;
        }
        return t2;
    }
};
