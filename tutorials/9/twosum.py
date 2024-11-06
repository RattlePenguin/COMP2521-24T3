from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, item in enumerate(nums):
            if target - item in hashMap:
                return [i, hashMap[target - item]]
            else:
                hashMap[item] = i

def main():
    x = Solution()
    print(x.twoSum([12, 6, 3, 3, 7, 8], 13))
    print(x.twoSum([12, 6, 3, 3, 7, 8], 16))
    print(x.twoSum([12, 6, 3, 3, 7, 8], 3))
    print(x.twoSum([12, 6, 3, 3, 7, 8], 6))

if __name__ == "__main__":
    main()