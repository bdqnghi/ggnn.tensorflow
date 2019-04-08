int main()
{
    int n,i,j,k,c;
    int a[21];
    scanf("%d",&n);
    
    for (j=1;j<=n;j++)
    {
      scanf("%d",&k);
      for(i=3;i<=k;i++)
      {
        a[1]=1;
        a[2]=1;                                    
       a[i]=a[i-1]+a[i-2];              
      }        
        c=a[k];
        printf("%d\n",c);        
    }
    getchar();
    getchar();
}
