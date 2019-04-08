int main(){
    int m, n;
    int a[22][22];
    int d, j, x, y;
    scanf("%d %d", &m, &n);
    for(d=1;d<=m;d++){
        for(j=1;j<=n;j++){
            scanf("%d", &a[d][j]);
        }
    }
    for(j=0;j<=n+1;j++)
      {a[0][j]=0;a[m+1][j]=0;}
    for(d=1;d<=m;d++)
      {a[d][0]=0;a[d][n+1]=0;}
    for(d=1;d<=m;d++){
        for(j=1;j<=n;j++){
            if(a[d][j]>=a[d-1][j]&&a[d][j]>=a[d+1][j]&&a[d][j]>=a[d][j-1]&&a[d][j]>=a[d][j+1]){
                x=d-1;y=j-1;
                printf("%d %d\n", x, y);
            }
        }
    }
    return 0;
}


