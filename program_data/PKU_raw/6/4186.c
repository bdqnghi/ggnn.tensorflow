int main(){
    int i,y,n,s,j,h,a,k,b,sz[100][100],jieguo[100],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        for(j=0;j<a;j++){
            for(k=0;k<b;k++){
                scanf("%d",&sz[j][k]);
                }
            }
        sum=0;
        for(h=0;h<b;h++){
            sum=sum+sz[0][h]+sz[a-1][h];
            }
        for(s=0;s<a;s++){
            sum=sum+sz[s][0]+sz[s][b-1];
            }
        sum=sum-sz[0][0]-sz[0][b-1]-sz[a-1][0]-sz[a-1][b-1];
        jieguo[i]=sum;
        }
    for(y=0;y<n;y++){
        printf("%d\n",jieguo[y]);
        }
    return 0;
}
