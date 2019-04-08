int main(){
    int i,n;
    int sz[10];
    double mark[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&sz[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lf ",&mark[i]);
    }
    for(i=0;i<n;i++){
        if(mark[i]>=90){
            mark[i]=4.0;
            }else if(
            85<=mark[i]&&mark[i]<=89){
                mark[i]=3.7;
            }else if(
            82<=mark[i]&&mark[i]<=84){
                mark[i]=3.3;
            }else if(
            78<=mark[i]&&mark[i]<=81){
                mark[i]=3.0;
            }else if(
            75<=mark[i]&&mark[i]<=77){
                mark[i]=2.7;
            }else if(
            72<=mark[i]&&mark[i]<=74){
                mark[i]=2.3;
            }else if(
            68<=mark[i]&&mark[i]<=71){
                mark[i]=2.0;
            }else if(
            64<=mark[i]&&mark[i]<=67){
                mark[i]=1.5;
            }else if(
            60<=mark[i]&&mark[i]<=63){
                mark[i]=1.0;
            }else if(
            mark[i]<60){
                mark[i]=0;
            }
        
    }
    double sum[10];
    for(i=0;i<n;i++){
        sum[i]=mark[i]*sz[i];
    }
    double sumGPA=0,xuefen=0;
    for(i=0;i<n;i++){
        sumGPA+=sum[i];
    }
    for(i=0;i<n;i++){
        xuefen+=sz[i];
    }
    double result;
    result=sumGPA/xuefen;
    printf("%.2lf",result);
    return 0;
}