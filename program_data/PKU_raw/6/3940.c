int main(){
    int i,j,k,l,m,n,s;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        scanf("%d%d",&m,&n);
        int a[m][n];
        s=0;
        for(j=0;j<m;j++){
            for(l=0;l<n;l++){
                scanf("%d",&(a[j][l]));
            }
        }
        if(m==1){
            for(j=0;j<n;j++){
                s+=a[0][j];
            }
        }else if(n==1){
            for(j=0;j<m;j++){
                s+=a[j][0];
            }
        }else{
            for(j=0;j<n;j++){
                s=s+a[0][j]+a[m-1][j];
            }
            for(j=0;j<m;j++){
                s=s+a[j][0]+a[j][n-1];
            }
            s=s-a[0][0]-a[0][n-1]-a[m-1][0]-a[m-1][n-1];
        }
        printf("%d\n",s);
    }
    return 0;
}