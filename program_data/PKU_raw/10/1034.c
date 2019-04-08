int a[25],b[25];
int n;
int changdu(int i)
{
    int j,max=1;
    for(j=i+1;j<n;j++)
    {
                      if(a[i]>=a[j])
                      {
                                    b[i]=changdu(j)+1;
                                    if(b[i]>max)
                                    max=b[i];
                                    }
                                    }
    b[i]=max;
    return max;

}
main()
{
      int max=0,i;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      b[i]=changdu(i);
      for(i=0;i<n;i++)
      {
                      if(b[i]>max)
                      max=b[i];
                      }
      printf("%d",max);
      

      }

