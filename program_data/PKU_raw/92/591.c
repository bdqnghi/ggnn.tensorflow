void pailie(int*a,int n);
int f(int*a,int*b,int n);
int maxa(int x,int y);
main()
{
      int n,a[1000],b[1000],i;
      for(;;)
      {
          scanf("%d",&n);
          if(n==0)
              break;
          for(i=0;i<n;i++)
              scanf("%d",&a[i]);
          for(i=0;i<n;i++)
              scanf("%d",&b[i]);
          pailie(a,n);
          pailie(b,n);
          printf("%d\n",f(a,b,n));
      }
      return 0;    
}
void pailie(int *a,int n)
{
     int i,j;
     for(i=0;i<n;i++)
     {
         int max=i;
         for(j=i+1;j<n;j++)
                 if (a[j]>a[max])
                     max=j;
         int temp=a[i];
         a[i]=a[max];
         a[max]=temp;
     }
}
int f(int *a,int *b,int n)
{
    int max;
    int i,j;
    int g[1001][1001];
    for(i=0;i<=n;i++)
       for(j=0;j<=n;j++)
          g[i][j]=-300000;
    g[0][0]=0;
 
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++)
        {
           if(g[i][j]>-200000)
           {
                          
               if (a[j]>b[i]) 
                    {g[i+1][j+1]=maxa(g[i][j]+200,g[i+1][j+1]);}
               else if(a[j]<b[i])
                    {g[i+1][j]=maxa(g[i][j]-200,g[i+1][j]);}
               else if(a[j]==b[i]&&b[i]==a[n-1-i+j])
                    {g[i+1][j]=maxa(g[i][j],g[i+1][j]);}
               else
                    {g[i+1][j+1]=maxa(g[i][j],g[i+1][j+1]);g[i+1][j]=maxa(g[i][j]-200,g[i+1][j]);}
           }
        }
    max=g[n][0];
    for(j=1;j<=n;j++)
        max=g[n][j]>max?g[n][j]:max;
    return (max);
}     
int maxa(int x,int y)
{
    return(x>y?x:y);
} 