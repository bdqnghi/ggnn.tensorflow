int main()
{
    int i,N,k,j,m,x;
    scanf("%d",&N);
    int a[N];
    k=0;
    for(i=1;i<=N;i++)
    {
                     scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
                     if(a[i]%2!=0)
                     {
                                  k++;
                     }
    }
    int b[k];
    x=0;
    for(i=1;i<=N;i++)
    {
                     if(a[i]>x)
                     {
                               x=a[i];
                     }
    }
    for(j=1;j<=k;j++)
    {
                     b[j]=x;
    }                              
    for(i=1;i<=N;i++)
    {
                     if(a[i]%2!=0&&a[i]<b[1])
                     {
                                             b[1]=a[i];
                     }
    }
    for(j=2;j<=k;j++)
    {
                     for(i=1;i<=N;i++)
                     {
                                      if(a[i]%2!=0&&a[i]>b[j-1]&&a[i]<b[j])
                                      {
                                                                           b[j]=a[i];
                                      }
                     }
    }
    for(j=1;j<k;j++)
    {
                    printf("%d,",b[j]);
    }
    printf("%d",b[k]);
    return 0;
}

