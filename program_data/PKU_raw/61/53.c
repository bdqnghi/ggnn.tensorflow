int f(int n)
{
    if(n==1)
    return 1;
    if(n==2)
    return 1;
    return (f(n-1)+f(n-2));
}
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a);
         printf("%d\n",f(a));
    }
    getchar();
    getchar();
}