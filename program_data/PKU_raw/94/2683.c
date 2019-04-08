int main()
{
    int n,x,t,e,b,sz[N],k;
    scanf("%d",&n);
    t=0;
    for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
        if(sz[i]%2==0){
        i=i+0;
        }else{
            sz[t]=sz[i];
            t++;      
        }
    }
    for(int a=1;a<t;a++){
        for(b=0;b<t-a;b++){
            if(sz[b]>sz[b+1]){
                e=sz[b+1];
                sz[b+1]=sz[b];
                sz[b]=e;
            }
        }
    }
    for(b=0;b<t-1;b++){
    printf("%d,",sz[b]);
    }
    printf("%d",sz[t-1]);
    return 0;
}
