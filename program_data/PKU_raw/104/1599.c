int Mi(int n)
{
    int i;
    int ans=1;
    for (i=0;i<n;i++)
    {
        ans=ans*2;
    }
    return ans;
}
int divide(int x)
{
    return x/2;
}
main()
{
      int x,y,n,i,m,j;
      int c=0;
      int a[11]={0},b[11]={0};
      scanf ("%d %d",&x,&y);
      for (n=0;;n++)
      {
          if (x>=Mi(n)&&x<Mi(n+1))
          {
               if (n>0)
               {
                 a[n]=x;
                 for (i=n-1;i>=0;i--)
                 {
                   a[i]=divide(a[i+1]);
                 }
               }
               else a[n]=x;
               break;
          }
      }
      for (m=0;;m++)
      {
          if (y>=Mi(m)&&y<Mi(m+1))
          {
               if (m>0)
               {
                 b[m]=y;
                 for (i=m-1;i>=0;i--)
                 {
                   b[i]=divide(b[i+1]);
                 }
               }
               else b[m]=y;
               break;
          }
      }
      for (i=n;i>=0;i--)
      {
          for (j=m;j>=0;j--)
          {
              if (a[i]==b[j]) 
              {
                   printf ("%d\n",a[i]);
                   c=c+1;
                   break;
              }
          }
          if (c==1) break;
      }
}