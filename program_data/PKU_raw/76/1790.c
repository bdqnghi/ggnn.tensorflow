int main(){
    int n,min=10000,max=0,p,q=0;
    int az[50000],bz[50000],sz[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&az[i],&bz[i]);
    }
    for(int k=0;k<n;k++){
        if(min>az[k]){
           min=az[k];
        }
        if(max<bz[k]){
           max=bz[k];
        }
    }
    p=max-min;
    for(int m=min;m<=max;m++){
        sz[m]=0;
    }
    for(int t=0;t<n;t++){
        for(int x=az[t];x<bz[t];x++){
            sz[x]=1;
        }
    }
    for(int y=min;y<=max;y++){
        q=q+sz[y];
    }
    if(p==q){
        printf("%d %d",min,max);
    } else{
        printf("no");
    }
    return 0;
}

