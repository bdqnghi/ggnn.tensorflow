int main(){
    int a,h,i,j;
    scanf("%d",&a);
    int sum[100][3];
    int n,k;
    for(h=1;h<=a;h++){
        scanf("%d%d",&n,&k);
        int sz[100][100];
        sum[h][1]=0;
        sum[h][2]=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=k;j++){
                scanf("%d",&sz[i][j]);             
                sum[h][1]=sum[h][1]+sz[i][j];
            }
        }
        if(n>1&&k>1){
            for(i=2;i<n;i++){
                for(j=2;j<k;j++){            
                    sum[h][2]=sum[h][2]+sz[i][j];
                }
            }
        } 
        sum[h][3]=sum[h][1]-sum[h][2];
    }
    for(i=1;i<=a;i++){
        printf("%d\n",sum[i][3]);
    }
    return 0;
}