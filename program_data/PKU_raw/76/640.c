int main()
{
    int n,i,j,p,q,e;
    int sz[50000][2];
    int sz2[50000][2];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=2;j++){
            sz2[i][j]=sz[i][j];
        }
    }
    for(p=1;p<=n;p++){
        for(q=1;q<=n-p;q++){
            if(sz2[q][1]>sz2[q+1][1]){
                e=sz2[q+1][1];
                sz2[q+1][1]=sz2[q][1];
                sz2[q][1]=e;
            }
        }
    }
    for(p=1;p<=n;p++){
        for(q=1;q<=n-p;q++){
            if(sz2[q][2]>sz2[q+1][2]){
                e=sz2[q+1][2];
                sz2[q+1][2]=sz2[q][2];
                sz2[q][2]=e;
            }
        }
    }
    for(i=sz2[1][1];i<=sz2[n][2];i++){
        for(j=1;j<=n;j++){
            if(i<sz[j][2]&&i>=sz[j][1]){
                break;
            }
            else if(j==n&&i>sz[j][2]||j==n&&i<sz[j][1]){
                printf("no");
                return 0;
            }
        }
    }
    printf("%d %d",sz2[1][1],sz2[n][2]);
    return 0;
}
