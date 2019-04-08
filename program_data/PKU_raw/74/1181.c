int r(int n)
{
    int m,d=0;
    m=n;
    while(m!=0)
    {
               d=d*10+m%10;
               m=m/10;
    }
    return n==d;
}
int test(int n)
{
    int j;
    for(j=2;j<=n/2;j++)
    if(n%j==0)
    return 0;
    return 1;
}
int main()
{
    int m,n,l=0,c=0;
    int i;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
                   if(r(i)&&test(i))
                   {
                                    if(l==0)
                                    {printf("%d",i);
                                    l=1;}
                                    else
                                    printf(",%d",i);
                   }
                   else c++;
                     
    }
    if(c==n-m+1)
    printf("no");
    getchar();
    getchar();

}
