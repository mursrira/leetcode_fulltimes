class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s = ""
        for c in s:

            if c.isalnum():
                new_s += str(c.lower())
        
        s, e = 0, len(new_s)-1

        while( s<e ):

            if new_s[s] == new_s[e]:
                s += 1
                e -= 1
            else:
                return False
        return True