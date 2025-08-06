from typing import *
#
# class Solution:
#     def rotate(self, nums: List[int], k: int) -> None:
#         """
#         Do not return anything, modify nums in-place instead.
#         """
#         # Rotate by right x steps
#         # O (n²)
#         for i in range(k):
#             #temp = nums[-1]
#             last = nums[-1]
#             for j in range(len(nums) - 1, 0, -1):
#                 nums[j] = nums[(j - 1)]
#             nums[0] = last

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # Rotate by right x steps
        k %= len(nums)
        nums.reverse()
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])

numbers = [1,2,3,4,5,6,7]
# output [5,6,7,1,2,3,4]
Solution().rotate(numbers, 3)
print(numbers)