from typing import List

class Solution:
    def oddOccurring(self, nums: List[int]) -> int:
        hashMap = {}
        for i in nums:
            hashMap[i] = hashMap.get(i, 0) + 1

        result = 0
        for item in hashMap.values():
            if item % 2 != 0:
                result += 1

        return result

def main():
    x = Solution()
    print(x.oddOccurring([4, 3, 4, 8, 8, 4]))
    print(x.oddOccurring([7, 2, 1, 5, 6, 9]))
    print(x.oddOccurring([1, 1, 3, 3, 7, 7]))

if __name__ == "__main__":
    main()