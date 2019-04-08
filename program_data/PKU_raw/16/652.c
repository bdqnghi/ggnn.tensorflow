int main()
{
    int n,a[5],i,j,t,re=0,k;
    scanf("%d",&n);
    if(n==0) printf("0");
    t=1;
    for(i=0;i<5;i++)
    {
                    t=(int)(pow(10,i+1)+0.5);
                    a[i]=10*(n%t)/t;
                    n=n-a[i]*t/10;
    }
    i=4;
    while(a[i]==0)
    {
           i=i-1;
           }
    for(j=0;j<=i;j++) printf("%d",a[j]);//re=re+a[j]*(int)(pow(10,i-j)+0.5);
    //printf("%d",re);
    //scanf("%d",&n);
    return 0;
}       
