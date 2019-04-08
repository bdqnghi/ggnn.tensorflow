int main( ){
    int i,k,e,q=0,result,n;
    int a[500],b[500],sz[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d\n",&(a[i]),&(b[i]));
    }
    for(i=0;i<n;i++){
    for(k=a[i];k<b[i];k++){
        sz[k]=1;
    }
    }
    for(i=0;i<=n;i++){
        for(k=0;k<n-1;k++){
            if(a[k]>a[k+1]){
                e=a[k];
                a[k]=a[k+1];
                a[k+1]=e;
            }
        }
    }
     for(i=0;i<=n;i++){
        for(k=0;k<n-1;k++){
            if(b[k]<b[k+1]){
                e=b[k];
                b[k]=b[k+1];
                b[k+1]=e;
            }
        }
    }

    result=b[0]-a[0];
    for(i=a[0];i<=b[0];i++){
        q+=sz[i];
    }
    if(result==q){
        printf("%d %d",a[0],b[0]);
    }else if(result!=q){
        printf("no");
    }
        return 0;
}



