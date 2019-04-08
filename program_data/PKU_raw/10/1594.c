int max(int x[],int n);
main()
{
      int a[26]={0},b[26]={0};
      int i,j,n,sum=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",a+i);
      for(i=n-1;i>=0;i--)
      {
                         sum=0;
                         for(j=i+1;j<n;j++)
                         {
                                           if(a[i]>=a[j])
                                           {
                                           if(b[j]>=sum) sum=b[j];
                                           }
                         }
                         b[i]=sum+1;
      }
      printf("%d\n",max(b,n));
}
int max(int x[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
                    if(x[i]>s) s=x[i];
    }
    return(s);
}