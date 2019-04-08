int main()
{
    int n=1,m,a[300],b[300],i,k,j;
    for (;;)
    {
        scanf("%d %d",&n,&m);
        if (n==0) break;
        for (i=0;i<n;i++) a[i]=i+1;
        while (n>1)
        {
              if (m%n==0) k=n;
              else k=m%n;
              for (i=k,j=0;i<n;i++,j++) b[j]=a[i];
              for (i=0;i<k-1;i++,j++) b[j]=a[i];
              n-=1;
              for (i=0;i<n;i++) a[i]=b[i];
              }
        printf("%d\n",a[0]);
        }
        }
                            
            
          
          
             
