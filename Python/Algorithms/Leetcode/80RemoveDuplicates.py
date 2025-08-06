from typing import *

def binary_search(arr, low, high, x):
    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)
        else:
            return binary_search(arr, mid + 1, high, x)
    else:
        return -1

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        skip: set = set()
        to_remove: dict = {}
        for i, element in enumerate(nums):
            if not element in to_remove:
                to_remove[element] = 0
            if element in skip:
                continue
            if nums.count(element) <= 2:
                skip.add(element)
            else:
                to_remove[element] += 1
        for element in to_remove.keys():
            for i in range(to_remove[element]):
                nums.remove(element)
                if nums.count(element) <= 2:
                    continue
        return len(nums)

nums = [1,1,1,2,2,3]
print(Solution().removeDuplicates(nums))
print(nums)