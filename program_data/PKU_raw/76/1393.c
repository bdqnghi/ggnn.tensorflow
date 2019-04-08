int main(){
    int n,i,e;
    double d;
    scanf("%d\n",&n);
    int ai[n],bi[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&(ai[i]),&(bi[i]));
    }
    int AI[n],BI[n];
    for(i=0;i<n;i++){
        AI[i]=ai[i];
        BI[i]=bi[i];
    }
    for(i=n-2;i>=0;i--){
        if(AI[i+1]<AI[i]){
            e=AI[i+1];
            AI[i+1]=AI[i];
            AI[i]=e;
        }
    }
    for(i=0;i<n-1;i++){
        if(BI[i]>BI[i+1]){
            e=BI[i+1];
            BI[i+1]=BI[i];
            BI[i]=e;
        }
    }
    for(d=AI[0]+0.5;d<BI[n-1];d++){
        for(i=0;i<n;i++){
            if(d>ai[i]&&d<bi[i]){
                break;
            }
        }
        if(i==n){
            printf("no");
            break;
        }
    }    
    if(d>BI[n-1]){
        printf("%d %d",AI[0],BI[n-1]);
    }
    return 0;
}
    