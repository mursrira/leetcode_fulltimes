class Solution:
    def winnerOfGame(self, colors: str) -> bool:
    
        cntAlice, cntBob = 0, 0
        for idx in range( len(colors) ):
            
            if (idx == 0) or (idx == len(colors)-1):
                continue
            if  colors[ idx ] == 'A':
                cntAlice = self.toCheck( idx, colors, 'A', cntAlice )
                continue
            if  colors[ idx ] == 'B':
                cntBob = self.toCheck( idx, colors, 'B', cntBob )
                continue
        
        if cntAlice > cntBob:
            return True
        else: #cntAlice <= cntBob:
            return False
        
    def toCheck( self, idx, colors, val, cnt ):
        
        if( colors[idx]==val and colors[idx+1]==val and colors[idx-1]==val ):
            cnt += 1
        
        return cnt
            
            
"""

HI Simone, Hope all is good.

You are good person and great friend.

Sorry for everything, my summer was rough and i lost balance.
I wanted to clarify everything in fall but things got rough lol.

Its ok if you dont want to be friend also. Just accept gummy bears


"""