int main()
{
      int a[1000];
      int i,j,n,k;
      int l=0;
      int swap;
      scanf("%d",&n);
      scanf("%d",&k);
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=0;i<n-1;i++)
      {
                        for(j=i+1;j<n;j++)
                        {
                                          if(a[i]+a[j] == k)
                                          {
                                                       printf("yes");
                                                       return 0;
                                                       }
                                          }
                        }
/*      for(i=0;i<n-1;i++)
      {
          for(j=n-1;j>0;j--)
          {
              if(a[j]<a[j-1])
              {
                  swap = a[j];
                  a[j] = a[j-1];
                  a[j-1] = swap;
              }
          }                
      }*/
      printf("no");

      return 0;
}
