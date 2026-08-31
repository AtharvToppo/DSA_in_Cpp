class Solution {
public:
    int fibnum(int num)
    {
        // Base case
        if(num<=1)
        {
            return num;
        }

        return fibnum(num-1)+fib(num-2);
    }
    int fib(int n)
    {
        return fibnum(n);
    }
};