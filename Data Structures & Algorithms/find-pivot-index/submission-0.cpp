#include <iostream>
#include <vector>


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }
        int leftsum = 0;
        int rightsum = 0;

        for(int j = 0; j < nums.size(); j++){
            if (j == 0){
                leftsum = 0;
            }
            else{
                leftsum += nums[j-1];
            }
            rightsum = total-leftsum - nums[j];
            if (leftsum == rightsum){
                return j;
            }
        }
        return -1;
    }
};