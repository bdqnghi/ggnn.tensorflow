int main(){
    int n,m,x,y;
    int sz[300];
    while(1){
        scanf("%d %d",&n,&m);
        if(n==0&&m==0){
            break;
        }
        for(int i=0;i<n;i++){
            sz[i]=0;
        }
        x=n;
        y=1;
        for(int t=0;t<n;t=(t+1)%n){
            if(sz[t]){
                continue;
            }
            if(y++==m){
                sz[t]=1;
                x--;
                y=1;
            }
            if(x==0){
                printf("%d\n",t+1);
                break;
            }
        }
    }
    return 0;
}
