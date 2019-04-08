int main() {
    int m,n,a,b;
    scanf("%d %d",&m,&n);
    int sz[m+2][n+2];
    for(a=0,b=0;b<n+2;b++) {
        sz[a][b]=0;
    }
    for(a=m+1,b=0;b<n+2;b++) {
        sz[a][b]=0;
    }
    for(a=1,b=0;a<m+1;a++) {
        sz[a][b]=0;
    }
    for(a=1,b=n+1;a<m+1;a++) {
        sz[a][b]=0;
    }
    for(a=1;a<=m;a++) {
        for(b=1;b<=n;b++) {
            scanf("%d",&(sz[a][b]));
        }
    }
    for(a=1;a<=m;a++) {
        for(b=1;b<=n;b++) {
            if(sz[a][b]>=sz[a-1][b]&&sz[a][b]>=sz[a+1][b]&&sz[a][b]>=sz[a][b+1]&&sz[a][b]>=sz[a][b-1]) {
                printf("%d %d\n",a-1,b-1);
            }
        }
    }
    return 0;
}


