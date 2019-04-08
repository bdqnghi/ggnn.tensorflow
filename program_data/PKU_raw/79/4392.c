int main(){
    int i,j,n,m,k,t,sz[300];
    while(1){
        scanf("%d %d",&n,&m);
        if (n==0&&m==0) break;
        for (i=0;i<n;i++) sz[i]=0;
        k=n,j=0;
        for(i=0;i<n;i=t){
            t=(i+1)%n;
            if (sz[i]){
                continue;
            }
            if (j++==m-1){
                sz[i]=1;
                k--;
                j=0;
            }
            if (k==0){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
