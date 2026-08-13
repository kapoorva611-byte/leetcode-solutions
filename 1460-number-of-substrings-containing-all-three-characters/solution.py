class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        d = {c:-1 for c in 'abc'}
        return sum(1+min((d:=d|{c:i}).values()) for i,c in enumerate(s))
