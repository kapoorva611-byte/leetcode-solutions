class Solution(object):
    def lengthOfLastWord(self, s):
        #self.s=s
        s=s.split()
        return len(s[-1])
solution=Solution()
print(solution.lengthOfLastWord("Hello World"))
print(solution.lengthOfLastWord("   fly me   to   the moon"))
print(solution.lengthOfLastWord("luffy is still joyboy"))
