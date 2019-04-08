int main()
{
    int k,n,m,i,j,l,sum1=0,sum2=0,sum3=0,sum4=0;
    int a[100][100];
    scanf("%d",&k);
    for(l=0;l<k;l++)
    {
      scanf("%d%d",&m,&n);
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
      }
         for(j=0;j<n;j++)
         {
            sum1=sum1+a[0][j];
            if((m-1)!=0)
           sum2=sum2+a[m-1][j];
         }
         for(i=1;i<m-1;i++)
         {
          sum3=sum3+a[i][0];
          if((n-1)!=0)
          sum4=sum4+a[i][n-1];
         }
          printf("%d\n",sum1+sum2+sum3+sum4);
         sum1=0;
         sum2=0;
         sum3=0;
         sum4=0;
      }
}