int f(int x)
{
    if(x==1||x==2)
      return 1;
    else
     return (f(x-1)+f(x-2));
}
int main()
{
    int n,i,k,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&k);
      m=f(k);
      printf("%d\n",m);
    }
    getchar();
    getchar();
}
