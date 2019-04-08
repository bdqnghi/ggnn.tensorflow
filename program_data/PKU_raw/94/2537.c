int main()
{
    int n,i,x[500],s,t,y[500],k,m;
    k=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        s=x[i]%2;
        if(s==1){
            y[k]=x[i];
            k=k+1;
        }
    }
    for(t=0;t<k;t++){
        for(i=k-1;i>t;i--){
            if(y[i]<y[i-1]){
                m=y[i];
                y[i]=y[i-1];
                y[i-1]=m;
            }
        }
    }
    for(i=0;i<k-1;i++){
        printf("%d,",y[i]);
    }
    printf("%d",y[k-1]);
    return 0;
}
