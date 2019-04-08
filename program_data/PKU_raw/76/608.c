int main(){
    int n,i,j,e,a;
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(j=1;j<=n;j++){
        for(i=0;i<n-j;i++){
            if(x[i]>x[i+1]){
                e=x[i];
                x[i]=x[i+1];
                x[i+1]=e;
            }
            if(y[i]>y[i+1]){
                e=y[i];
                y[i]=y[i+1];
                y[i+1]=e;
            }
        }
    }
    a=0;
    for(i=0;i<n-1;i++){
        if(x[n-i-1]>y[n-i-2]||y[i]<x[i+1]){
              a++;
        }
    }
    if(a!=0){
        printf("no");
    }
    else{
        printf("%d %d",x[0],y[n-1]);
    }
    return 0;
}
