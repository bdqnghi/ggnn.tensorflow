int main()
{
    int a[100];
    int i,j,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                     printf("\n");
                     scanf("%d",&a[i]);
    }
    for(j=0;j<2;j++)
    {
                      for(i=0;i<n-1-j;i++)
                      {
                                          if(a[i]>a[i+1])
                                          {
                                                         t=a[i];
                                                         a[i]=a[i+1];
                                                         a[i+1]=t;
                                          }
                      }
    }
                        printf("%d\n%d",a[n-1],a[n-2]);
    getchar();getchar();
}
