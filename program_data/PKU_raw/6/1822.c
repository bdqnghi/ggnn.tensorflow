int main(){
    int N=100;
    int k,m,n,i,a[N][N],b[N],c,d,e[N],f[N];
    scanf("%d",&k);
    for(i=0;i<k;i++){
        b[i]=0;
        scanf("%d %d",&e[i],&f[i]);
        m=e[i];n=f[i];
        for(c=0;c<m;c++){
            for(d=0;d<n;d++){
                scanf("%d",&a[c][d]);
            }
        }
        for(c=0;c<m;c++){
            b[i]=b[i]+a[c][0]+a[c][n-1];
        }
        for(d=1;d<n-1;d++){
            b[i]=b[i]+a[0][d]+a[m-1][d];
        }
        printf("%d",b[i]);
        printf("\n");
    }
    return 0;
}
