int f(int x);
int main()
{
    int m,n[1000],i,k;
    double sum[1000];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n[i]);
    }   
    for(i=0;i<m;i++)
    {
        sum[i]=0;
        for(k=1;k<=n[i];k++)
        {
             sum[i]=sum[i]+f(k+1)*1.0/f(k);
        }
        printf("%.3lf\n",sum[i]);
    }
    return 0;
}


int f(int x)
{
    if(x==1)
       return 1;
    else if(x==2)
       return 2;
    else
       return (f(x-1)+f(x-2));
}