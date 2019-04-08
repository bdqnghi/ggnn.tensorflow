int main()
{
   int k,i,j,l,m,n,s=0,p=0,r=0,q=0,sum;
   scanf("%d",&k);
      int a[1000][1000];
   for(i=0;i<k;i++)
   {
      scanf("%d%d",&m,&n);
      for(j=1;j<=m;j++)
      {
         for(l=1;l<=n;l++)
         { 
            scanf("%d",&a[j][l]);
          }
       }
      for(j=1;j<=n;j++)
         {
             s=s+a[1][j];
             q=q+a[m][j];
          }
      for(j=1;j<=m;j++)
          {
             p=p+a[j][1];
             r=r+a[j][n];
           }
      sum=s+p+r+q-a[1][1]-a[m][1]-a[1][n]-a[m][n];
      printf("%d\n",sum);
      s=0;
      q=0;
      p=0;
      r=0;
   }
   return 0;
}
