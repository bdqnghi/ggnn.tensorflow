int main()
{
    int n,i,a[1000],b[100];
    scanf("%d",&n);
    a[1]=1;
    a[2]=1;
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&b[i]);
    }
    for(i=3;i<=1000;i++)
    {
                                             a[i]=a[i-1]+a[i-2];
    }
    for(i=1;i<=n;i++)
    {
         printf("%d\n",a[b[i]]);
    }
         getchar();
         getchar();
         getchar();
}
