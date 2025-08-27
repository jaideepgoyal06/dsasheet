https://www.geeksforgeeks.org/problems/perfect-numbers3207/1
class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            
            }
            
        }
        return sum == n;
    }
};
