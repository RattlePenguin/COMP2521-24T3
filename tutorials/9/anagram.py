class Solution:
    def anagram(self, s: str, t: str) -> bool:
        hashMap = {}

        for char in s:
            hashMap[char] = hashMap.get(char, 0) + 1
        for char in t:
            hashMap[char] = hashMap.get(char, 0) - 1
        for count in hashMap.values():
            if count != 0:
                return False
        return True

def main():
    x = Solution()
    print(x.anagram("abcde", "edcba"))
    print(x.anagram("abcde", "fdcba"))
    print(x.anagram("abcde", "abcdef"))
    print(x.anagram("aaabb", "ababa"))
    print(x.anagram("aaabb", "babab"))

if __name__ == "__main__":
    main()