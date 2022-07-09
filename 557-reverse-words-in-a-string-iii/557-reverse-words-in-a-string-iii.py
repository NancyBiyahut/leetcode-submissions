class Solution:
    def reverseWords(self, s: str) -> str:
        t = s.split(" ")
        p = []
        print(t)
        for x in t:
            p.append(x[::-1])
        delimiter = " "
        s = delimiter.join(p)
        return s
        