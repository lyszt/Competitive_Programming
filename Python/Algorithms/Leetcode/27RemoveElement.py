from typing import *


    class Solution:
        def removeElement(self, nums: List[int], val: int) -> int:
            while val in nums:
                nums.remove(val)
            return len(nums)

nums = [0,1,2,2,3,0,4,2]
print(Solution().removeElement(nums, 2))
print(nums)