int main(){
    int row,col,k,i,j;
    int sz[100][100];
    scanf("%d %d",&row,&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    for(k=0; row-k>k && col-k>k; k++) {
        for (i=k,j=k; j<col-k-1; j++) {
            printf("%d\n", sz[i][j]);
        }
        for (; i<row-k-1; i++) {
            printf("%d\n", sz[i][j]);
        }
        if (i==k || j==k) {
            printf("%d\n", sz[i][j]);
            break;
        }
        for (; j>k; j--) {
            printf("%d\n", sz[i][j]);
        }
        for (; i>k; i--) {
            printf("%d\n", sz[i][j]);
        }
    }
    return 0;
}



