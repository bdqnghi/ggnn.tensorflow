int main()
{
    int k;
    scanf("%d",&k);
    int m,n,sum=0;
    int i,j,p;
    for(p=0;p<k;p++){ 
    scanf("%d %d",&m,&n);
    int sz[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    for(i=0,j=0;j<n;j++){
        sum=sum+sz[i][j];
    }
    for(i=m-1,j=0;j<n;j++){
        sum=sum+sz[i][j];
    } 
    for(j=0,i=0;i<m;i++){
        sum=sum+sz[i][j];
    }
    for(j=n-1,i=0;i<m;i++){
        sum=sum+sz[i][j];
    }
    sum=sum-sz[0][0]-sz[m-1][0]-sz[m-1][n-1]-sz[0][n-1];
    printf("%d\n",sum);
    sum=0;
    }
    return 0;
}