int main(){
    int k,n,i,j,l,a[100][100][100],len[100],cro[100],b[100]={0};
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d %d",&len[i],&cro[i]);
        for(j=0;j<len[i];j++){
            for(l=0;l<cro[i];l++)
                scanf("%d",&a[i][j][l]);
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<cro[i];j++){
            b[i]+=a[i][0][j];
        }
        for(j=1;j<len[i];j++){
            b[i]+=a[i][j][(cro[i]-1)];
        }
        for(j=0;j<cro[i]-1;j++){
            b[i]+=a[i][len[i]-1][j];
        }
        for(j=1;j<len[i]-1;j++){
            b[i]+=a[i][j][0];
        }
    }
    for(i=0;i<k;i++)
        printf("%d\n",b[i]);
    return 0;
}