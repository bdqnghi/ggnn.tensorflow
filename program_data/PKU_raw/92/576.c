main()
{
      int n;
      scanf("%d",&n);
      while(n!=0)
      {
                     int a[1002],b[1002],u=0,k=0;
      for(int i=1;i<=n;i++)
      {
              scanf("%d",&a[i-1]);
      }
      for(int i=1;i<=n;i++)
      {
              scanf("%d",&b[i-1]);
      }
      b[n]=1000001;
      a[n]=-1;
      for(int i=n-2;i>=0;i--)
      {
              for(int j=0;j<=i;j++)
              {
                      if(a[j+1]<=a[j])
                      {
                                      int x=0;
                                      x=a[j+1];
                                      a[j+1]=a[j];
                                      a[j]=x;
                      }
              }
      }
      for(int i=n-2;i>=0;i--)
      {
              for(int j=0;j<=i;j++)
              {
                      if(b[j+1]<=b[j])
                      {
                                      int x=0;
                                      x=b[j+1];
                                      b[j+1]=b[j];
                                      b[j]=x;
                      }
              }
      }
      int i,j;
      for(i=0;i<=n-1;i++)
      {
              int l,c=-1;
              for(l=0;l<=n-1;l++)
              {
                           while(b[l]==1000000)
                           {
                                             l++;
                           }
                           if(a[i]<=b[l])
                           break;
                           else
                           c=l;
              }
              if(c!=-1)
              {
                      k++;
                      b[c]=1000000;
                      a[i]=-1;
              }
      }
      for(i=0;i<=n-1;i++)
      {
                         for(j=0;j<=n-1;j++)
                         {
                                            if(a[i]==b[j])
                                            {
                                                          u++;
                                                          a[i]=-1;
                                                          b[j]=1000000;
                                            }
                         }
      }
      n=-200*n+400*k+200*u;
      printf("%d\n",n);
      scanf("%d",&n);
      }
}

