https://www.geeksforgeeks.org/problems/generating-all-subarrays/1
class Solution {
public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> result;
        
        for (int i = 0; i < n; i++) {          // starting index
            vector<int> temp;
            for (int j = i; j < n; j++) {      // ending index
                temp.push_back(arr[j]);
                result.push_back(temp);         // push current subarray
            }
        }
        
        return result;
    }
};
