int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int ans=0;
    int m=gridSize,n=gridColSize[0];
    for(int i=0;i<m;i++){
        if(grid[i][0]==1) ans++;
        if(grid[i][n-1]==1) ans++;
    }
    for(int j=0;j<n;j++){
        if(grid[0][j]==1) ans++;
        if(grid[m-1][j]==1) ans++;
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]+grid[i+1][j]==1) ans++;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n-1;j++){
            if(grid[i][j]+grid[i][j+1]==1) ans++;
        }
    }
    return ans;
}
