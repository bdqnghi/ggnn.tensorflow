int main()
{
    int n, a, b, i, k;
    double j;
    scanf("%d%d%d", &n, &a, &b);
    j=(double)(b*1.000/(a*1.000));
    int sz[n-1][2];
    for(i=0;i<=n-2;i++){
        for(k=0;k<=1;k++){
        scanf("%d", &sz[i][k]);
        }
    }
    for(i=0;i<=n-2;i++){
        if((((sz[i][1]*1.000/(sz[i][0]*1.000)))-j)>0.05){
        printf("better\n");
        }
        else if((((sz[i][1]*1.000/(sz[i][0]*1.000)))-j)<-0.05){
             printf("worse\n");
             }
             else{
             printf("same\n");}
    }
    return 0;
}