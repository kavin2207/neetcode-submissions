class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=1;
        int c;
        while(n--){
            c=a+b;
            a=b;
            b=c;
        }
        //cout<<a<<" "<<b<<" "<<c<<endl;
        return a;
    }
};
