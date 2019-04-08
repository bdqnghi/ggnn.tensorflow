main()
{
      int i,j,t,n,m,sum,head,taila,tailb,max=1000;
      int a[max],b[max];
      scanf("%d",&n);
      while(n!=0)
      {
          for (i=0;i<=n-1;i++)
          {
              scanf("%d",&a[i]);
          }
          for (i=0;i<=n-1;i++)
          {
              scanf("%d",&b[i]);
          }
          for (j=0;j<n-1;j++)
          {
              for (i=0;i<n-1-j;i++)
              {
                  if (a[i]<a[i+1])
                  {
                      t=a[i];
                      a[i]=a[i+1];
                      a[i+1]=t;
                  }
              }
          }
          for (j=0;j<n-1;j++)
          {
              for (i=0;i<n-1-j;i++)
              {
                  if (b[i]<b[i+1])
                  {
                      t=b[i];
                      b[i]=b[i+1];
                      b[i+1]=t;
                  }
              }
          }
          sum=0;
          head=0;
          taila=n-1;
          tailb=n-1;
          for(i=0;i<n;i++)
          {
              if(a[head]>b[i])
              {
                  head++;
                  sum+=200;
              }
              else if(a[head]<b[i])
              {
                  taila--;
                  sum-=200;
              }
              else if(a[head]==b[i])
              {
                  for(j=taila,m=tailb;j>=head;j--,m--)
                  {
                      if(a[j]>b[m])
                      {
                          sum+=200;
                          taila--;
                          tailb--;
                      }
                      else
                      {
                          if(a[j]<b[i]) sum-=200;
                          taila=--j;
                          tailb=m;
                          break;               
                      }
                  }
              }
              if(head>taila) break;
          }
          printf("%d\n",sum);
          scanf("%d",&n);
      }
      getchar();
      getchar();
}