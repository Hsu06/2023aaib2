int M,N;
char** Grid;
void travel(int i,int j){
    if(i<0 || j<0 || i>=M || j>=N) return;
    if (Grid[i][j]=='0') return;
    Grid[j][j]=='0';
    travel(i+1,j);
    travel(i-1,j);
    travel(i,j+1);
    travel(i,j-1);
}
int numIslands(char** grid, int gridSize, int* gridColSize) {
    Grid=grid;
    M=gridSize;
    N=gridColSize[0];
    int ans=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(grid[i][j]=='1'){
                ans++;
                travel(i,j);
            }
        }
    }
    return ans;
}
