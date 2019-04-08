
int f(int a[100][100],int n)
{
    static int s=0;
    int i,j;
    double m1,m2;
    int *p;
    
    if(n==1)
    {printf("%d\n",s);s=0;}
    
    if(n>1)
    {
    for(i=0;i<n;i++)
    {p=a[i];
    m1=100000;
    for(j=0;j<n;j++)
    if(p[j]<=m1) m1=p[j];
    for(j=0;j<n;j++)
    p[j]=p[j]-m1;}
    
    for(j=0;j<n;j++)
    {m2=100000;
    for(i=0;i<n;i++)
    if(a[i][j]<=m2) m2=a[i][j];
    for(i=0;i<n;i++)
    a[i][j]-=m2;}
    
    s+=a[1][1];
    
    for(i=1;i<n-1;i++)
    {for(j=0;j<n;j++)
    a[i][j]=a[i+1][j];}
    for(j=1;j<n-1;j++)
    {for(i=0;i<n-1;i++)
    a[i][j]=a[i][j+1];}
    
    f(a,n-1);
    }
}

main()
{
      int n,i,j,k;
      int a[100][100];
      
      scanf("%d\n",&n);
      for(i=1;i<=n;i++)
      {
      for(j=0;j<n;j++)
      {for(k=0;k<n;k++)
      scanf("%d",&a[j][k]);}
      f(a,n);
      }

}
    
    
    
    
