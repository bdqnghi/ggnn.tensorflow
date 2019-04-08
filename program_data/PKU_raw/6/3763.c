int main(){
    int k,m,n,i,j,a,b,sz[100][100];
    scanf("%d",&k);
    for(a=0;a<k;a++){
    scanf("%d%d",&m,&n);
    int s=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&(sz[i][j]));
            }
        }
        if(m==1&&n==1){
        s=sz[0][0];}else{
        for(b=0;b<n;b++){
            s=s+sz[0][b]+sz[m-1][b];
        }
        for(b=0;b<m;b++){
            s=s+sz[b][0]+sz[b][n-1];
        }
        s=s-sz[0][0]-sz[0][n-1]-sz[m-1][0]-sz[m-1][n-1];}
        printf("%d\n",s);
    }
    return 0;
}