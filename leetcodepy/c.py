from typing import List


class Solution:
    def minImpossibleOR(self, nums: List[int]) -> int:
        hashs = set()
        for i in range(len(nums)):
            hashs.add(nums[i])
        
        check = 1 
        while True:
            if check not in hashs:
                break
            else:
                check = check << 1
        return check
            