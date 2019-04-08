int main()
{
    int n,i,j,ans;
    int a[100],f[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
      
    ans=1;
    for(i=1;i<=n;i++)
    {
       f[i]=1;
       for(j=1;j<i;j++)
          if((a[j]>=a[i])&&(f[j]+1>f[i]))
            f[i]=f[j]+1;
       if(f[i]>ans)
         ans=f[i];              
    }
    
    printf("%d",ans);
    
    return 0;
}
