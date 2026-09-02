class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        exist = []
        for i in range(1,len(nums) + 1):
            exist.append(i)
        missing = 0
        for i in exist:
            if i not in nums:
                missing = i
        seen = {}
        repeat = 0
        for n in nums:
            if n in seen.keys():
                repeat = n
            seen[n] = "seen"
        return [repeat, missing]
                
            


            
        