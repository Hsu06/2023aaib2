class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        ans=0
        m,n=len(grid),len(grid[0])
        for i in range(m):
            if grid[i][0]==1: ans+=1
            if grid[i][n-1]==1: ans+=1
        for j in range(n):
            if grid[0][j]==1: ans+=1
            if grid[m-1][j]==1: ans+=1

        for i in range(m-1):
            for j in range(n):
                if grid[i][j]+grid[i+1][j]==1: ans+=1
        for i in range(m):
            for j in range(n-1):
                if grid[i][j]+grid[i][j+1]==1: ans+=1
        return ans

