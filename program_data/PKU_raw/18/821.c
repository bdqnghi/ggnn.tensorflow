int a[1000][1000];
int min1(int i,int k)
{
    int j,temp=10000;
    for(j=1;j<=k;j++)
    {
                     if(temp>a[i][j]) temp=a[i][j];
    }
    return temp;
}
int min2(int j,int k)
{
    int i,temp=10000;
    for(i=1;i<=k;i++)
    {
                     if(temp>a[i][j]) temp=a[i][j];
    }
    return temp;
}
main()
{
      int n,i,j,k,g,temp,ans;
      scanf("%d",&n);
      for(g=0;g<n;g++)
      {
                      for(i=1;i<=n;i++)
                      {
                                       for(j=1;j<=n;j++)
                                       {
                                                        scanf("%d",&a[i][j]);
                                       }
                      }
                      ans=0;
                      for(k=n;k>1;k--)
                      {
                                      for(i=1;i<=k;i++)
                                      {
                                                       temp=min1(i,k);
                                                       for(j=1;j<=k;j++)
                                                       {
                                                                        a[i][j]-=temp;
                                                       }
                                      }
                                      for(j=1;j<=k;j++)
                                      {
                                                       temp=min2(j,k);
                                                       for(i=1;i<=k;i++)
                                                       {
                                                                        a[i][j]-=temp;
                                                       }
                                      }
                                      ans+=a[2][2];
                                      for(i=2;i<k;i++)
                                      {
                                                      for(j=1;j<=k;j++)
                                                      {
                                                                       a[i][j]=a[i+1][j];
                                                      }
                                      }
                                      for(j=2;j<k;j++)
                                      {
                                                       for(i=1;i<k;i++)
                                                       {
                                                                       a[i][j]=a[i][j+1];
                                                       }
                                      }
                      }
                      printf("%d\n",ans);
      }
      
}
                                                       
