class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; int n: nums){
            if (seen.contains(target - n)){
                return {seen[target - n], i};
            }
            seen[n] = i;
            i++;
        }
    }
};
