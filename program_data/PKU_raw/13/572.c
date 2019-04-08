int main()
{
    int n,a[20000],i,j,b[100],t=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<t;j++)
        if(a[i]==b[j]) break;
        if(j>=t)
         {
          b[t]=a[i];
          t++;
         }
    }
      for(j=1;j<t-1;j++)
      printf("%d ",b[j]);
      printf("%d",b[t-1]);
}
