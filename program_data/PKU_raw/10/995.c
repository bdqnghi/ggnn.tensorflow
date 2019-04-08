int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int solve(int k,int h,int *p,int n)
{
    if(k==n) return 0;
    if(p[k]==h) return 1+solve(k+1, h, p,n);
    if(p[k]>h)   return solve(k+1, h, p, n);
    return max(solve(k+1, h, p, n),1+solve(k+1, p[k], p, n));
}
int main()
{
    int n;
    int p[25];
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("%d",solve(0, 100000, p, n));
    return 0;
}
