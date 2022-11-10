class Solution:
    def isValid(self, s: str) -> bool:

        store = {
            "(" : ")",
            "{" : "}",
            "[" : "]"
        }

        stk = []
        for idx in range( len(s) ):

            ele = s[idx]

            if ele in store:
                stk.append( ele )
            elif len(stk) != 0 and ele == store[ stk[-1] ]:
                stk.pop()
            else:
                return False

        return stk == []