https://www.geeksforgeeks.org/problems/decimal-to-binary-1587115620/1
class Solution {
public:
    string decToBinary(int n) {
        if (n == 0) return "0";  // Edge case

        string binary = "";
        while (n > 0) {
            int rem = n % 2;
            binary = char(rem + '0') + binary;  // Add remainder at front
            n /= 2;
        }
        return binary;
    }
};
