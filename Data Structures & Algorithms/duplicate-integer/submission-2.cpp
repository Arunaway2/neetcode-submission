class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int n:nums){
            if (seen.contains(n)){
                return true;
            }
            seen[n] = n;
        }
        return false;

        
    }
};