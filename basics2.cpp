https://www.geeksforgeeks.org/problems/series-ap5310/1
class Solution {
public:
    int nthTermOfAP(int a1, int a2, int n) {
        int d = a2 - a1;      // common difference
        return a1 + (n - 1) * d; // nth term formula
    }
};
