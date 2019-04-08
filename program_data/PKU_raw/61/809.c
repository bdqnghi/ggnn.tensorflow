   
int main()
{
    int a[10000];
    a[0]=1;a[1]=1;
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
       int k;
       scanf("%d",&k);
       for(int i=2;i<k;i++)
       a[i]=a[i-1]+a[i-2];
       printf("%d\n",a[k-1]);
    }
    getchar();
    getchar();
    getchar();
}
  