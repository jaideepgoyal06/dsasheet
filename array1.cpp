https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1
class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>v;
        int n=arr.size();
        
        for(int i = 0; i < n; i = i + 2){
            
            v.push_back(arr[i]);
            
        }
        return v;
        
    }
    
};
