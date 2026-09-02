class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:

        uniq1 = []
        for i in nums1:
            if i in nums2:
                continue
            else:
                uniq1.append(i)

        uniq2 = []
        for i in nums2:
            if i in nums1:
                continue
            else:
                uniq2.append(i)
        
        return [list(set(uniq1)), list(set(uniq2))]

        