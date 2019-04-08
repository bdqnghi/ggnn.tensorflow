main ()
{
     int k,m,n,a[100][100],i,j,sum;
     scanf ("%d",&k);
     for (;k>0;k--)
     {
         scanf ("%d %d",&m,&n);
         sum=0;
         for (i=0;i<m;i++)
         for (j=0;j<n;j++)
         a[i][j]=0;
         for (i=0;i<m;i++)
         for (j=0;j<n;j++)
         scanf ("%d",&a[i][j]);
         for (j=0;j<n;j++)
         sum=sum+a[0][j]+a[m-1][j];
         for (i=1;i<m-1;i++)
         sum=sum+a[i][0]+a[i][n-1];
         printf ("%d\n",sum);
     }
}