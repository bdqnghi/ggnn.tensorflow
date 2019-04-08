int a[1000],b[1000],a1[1000];
int n;
void paixua()
{
     int i,j,k;
     for(i=0;i<n-1;i++)
     {
                       for(j=i;j<n;j++)
                       {
                                       if(a[i]<a[j])
                                       {
                                                    k=a[i];
                                                    a[i]=a[j];
                                                    a[j]=k;
                                       }
                       }
     }
}
void paixub()
{
     int i,j,k;
     for(i=0;i<n-1;i++)
     {
                       for(j=i;j<n;j++)
                       {
                                       if(b[i]<b[j])
                                       {
                                                    k=b[i];
                                                    b[i]=b[j];
                                                    b[j]=k;
                                       }
                       }
     }
}
void yixu(int k)
{
     int i;
     for(i=0;i<n-k;i++)
     {
                      a1[i+k]=a[i];
                      }
     for(i=n-k;i<n;i++)
     {
                       a1[n-1-i]=a[i];
                       }
}
main()
{
      int i,j,w,sum;
      for(;1;)
      {
              scanf("%d",&n);
              if(n==0) break;
              else
              {
                  for(i=0;i<n;i++)
                  {
                                  scanf("%d",&a[i]);
                                  }
                  for(i=0;i<n;i++)
                  {
                                  scanf("%d",&b[i]);
                                  }
                  paixua();
                  paixub();
                  w=-200*n;
                  for(i=0;i<n;i++)
                  {
                                  sum=0;
                                  yixu(i);
                                  for(j=0;j<n;j++)
                                  {
                                                  if(a1[j]>b[j]) sum=sum+200;
                                                  else if(a1[j]<b[j]) sum=sum-200;
                                  }
                                  if(w<sum) w=sum;
                  }
                  printf("%d\n",w);
              }
      }
    
}
