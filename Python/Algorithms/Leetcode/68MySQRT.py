# Newton-Raphson Method for Square Roots
# Given a number S, we want to find x such that x²= S.
# Meaning keep dividing by 2 til you find it

class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0 or x == 1:
            return x

        def recursive_square(curr_x: float, prev_x: float, tolerance=1e-10):
            if abs(curr_x - prev_x) < tolerance:
                return curr_x
            next_x = 0.5 * (curr_x + x / curr_x)
            return recursive_square(next_x, curr_x, tolerance)

        result = recursive_square(x / 2, x)
        return int(result)