https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        int max_from_right = arr[n-1];
        
        result.push_back(max_from_right); // last element is always a leader
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                max_from_right = arr[i];
                result.push_back(arr[i]);
            }
        }
        
        reverse(result.begin(), result.end()); // correct order
        return result;
    }
};
