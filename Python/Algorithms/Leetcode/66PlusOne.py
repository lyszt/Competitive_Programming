from typing import *


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        real_number: int = int("".join([str(digit) for digit in digits]))
        real_number += 1
        len_real_number = len(str(real_number))
        final_return: List[int] = [0 for _ in range(len_real_number)]
        for i in range(len_real_number-1, -1, -1):
            final_return[i] = real_number % 10
            real_number //= 10
        return final_return



if __name__ == '__main__':
    print(Solution().plusOne([9,9,9]))