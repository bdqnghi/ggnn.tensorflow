int a[15][15];
int f(int n,int m)
{
    if(n<0) return 0;
    if(n==0||m==1) return 1;
    return f(n,m-1)+f(n-m,m);
}
int main()
{
    int pl;scanf("%d",&pl);
    while(pl--)
    {
        int n,m;scanf("%d%d",&n,&m);
        printf("%d",f(n,m));
putchar('\n');
             }
    return 0;
}