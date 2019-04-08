int main()
{
    int i,n,a=0,b=0,c=0,d=0;
    double e,f,g,h;
    int sz[10000];
    int num[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
        if(sz[i]<19){
            a++;
            }else if(sz[i]<36){
            b++;
            }else if(sz[i]<61){
            c++;
            }else{
            d++;
        }
    }
    e=1.0*a/n*100;
    f=1.0*b/n*100;
    g=1.0*c/n*100;
    h=1.0*d/n*100;
    printf("1-18: ");
    printf("%.2lf",e);
    printf("%%\n");
    printf("19-35: ");
    printf("%.2lf",f);
    printf("%%\n");
    printf("36-60: ");
    printf("%.2lf",g);
    printf("%%\n");
    printf("Over60: ");
    printf("%.2lf",h);
    printf("%%\n");
    return 0;
}

