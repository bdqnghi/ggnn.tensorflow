int main()
{
    int p[50001];
    int n,i,j,count=1;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
                    p[i]=1;
    }
    for(i=2;i<=n/2;i++)
    {
     if (p[i])
     {
      for(j=i+i;j<=n;j+=i)
      {
                          p[j]=0;                       
      }
     }
     }
    
    for(i=6;i<=n;i+=2)
    {
                      for (j=2;j<=n/2;j++)
                      if (p[j]&&p[i-j])
                      {printf("%d=%d+%d\n",i,j,i-j);break;}
    }
    
}