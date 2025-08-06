from typing import *

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        explored: set = set()
        for element in nums:
            if element not in explored:
                explored.add(element)
                count = nums.count(element)
                if count > len(nums) / 2:
                    return element
            else:
                continue
        return 0

# # Boyer-Moore Voting Algorithm
# class Solution:
#     def majorityElement(self, nums: List[int]) -> int:
#         count = 0
#         candidate = None
#
#         for num in nums:
#             if count == 0:
#                 candidate = num
#             count += (1 if num == candidate else -1)
#
#         return candidate

nums = [3,2,3]
print(Solution().majorityElement(nums))