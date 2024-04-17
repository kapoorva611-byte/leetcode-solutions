class Solution:
    def __init__(self):
        pass
    def isPalindrome(self, x):
        self.x=x
         #x = ''.join(char.lower() for char in s if char.isalnum())
        x_str = str(x)
        return x_str == x_str[::-1]
solution=Solution()
print(solution.isPalindrome(121))

        
