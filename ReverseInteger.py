class Solution:
    def reverse(self, x: int) -> int:
        s = 0
        sign = -1 if x < 0 else 1
        x = abs(x)

        while x > 0:
            r = x % 10
            x //= 10
            s = (s * 10) + r

        s *= sign
        if s > 2**31 - 1 or s < -(2**31):
            return 0
        return s


def main():
    x = -123
    sol = Solution()
    y = sol.reverse(x)
    print(f"The reverse of {x} is : {y}")


if __name__ == "__main__":
    main()
