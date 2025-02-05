from typing import List


class Solution:
    def reverseString(self, s: List[str]) -> None:
        left, right = 0, len(s) - 1
        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1


def main():
    list1 = ["y", "o", "u"]
    sol = Solution()
    sol.reverseString(list1)
    print(list1)


main()
