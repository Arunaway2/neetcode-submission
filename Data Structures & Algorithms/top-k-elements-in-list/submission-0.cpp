class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counts;
        for(int n : nums){
            counts[n]++;
        }


        vector<vector<int>> buckets(nums.size() + 1);

        for(const auto& c : counts){
            buckets[c.second].push_back(c.first);
        }
        vector<int> res;
        for(int i = buckets.size() - 1; i > 0; i--){
            for (int n: buckets[i]){
                res.push_back(n);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
        
    }
};
