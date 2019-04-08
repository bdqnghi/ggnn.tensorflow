int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[30][30]={0};
    int b[400][2]={0};
    int i,j,k=0;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]){
                b[k][0]=i;b[k][1]=j;k++;
            }
        }
    }
    for(i=0;i<k;i++){
        for(j=i;j<k;j++){
            if(b[i][0]>=b[j][0]){
                int tmp1,tmp2;
                tmp1=b[i][0];
                tmp2=b[i][1];
                b[i][0]=b[j][0];
                b[i][1]=b[j][1];
                b[j][0]=tmp1;
                b[j][1]=tmp2;
            }
        }
    }
    for(i=0;i<k;i++){
        for(j=i;j<k;j++){
            if(b[i][0]==b[j][0]){
            if(b[i][1]>=b[j][1]){
                int tmp1,tmp2;
                tmp1=b[i][0];
                tmp2=b[i][1];
                b[i][0]=b[j][0];
                b[i][1]=b[j][1];
                b[j][0]=tmp1;
                b[j][1]=tmp2;
            }
            }
        }
    }
    for(i=0;i<k;i++){
        printf("%d %d\n",b[i][0]-1,b[i][1]-1);
    }
    return 0;
}
