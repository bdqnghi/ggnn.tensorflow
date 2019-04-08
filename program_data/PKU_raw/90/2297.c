int f(int m,int n)
{
    if((n==1)||(m==0))return 1;
    if(n>m)
    return f(m,m);
    if(n<=m)
    return f(m,n-1)+f(m-n,n);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",f(m,n));
    t--;
    }
}
