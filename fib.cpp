// Approach
// 1. check for edge cases;
// 2. use recursive formulae to calculate fib(fib(n-1) + fib(n-2));
// Time complexity : O(2^n) as it exponential calls the recursive function;
// Space Complexity : O(1);


class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
         return( fib(n-1) + fib(n-2));
        
    }
};
