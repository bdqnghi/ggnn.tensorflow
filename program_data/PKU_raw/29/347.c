main()
{
    int m,n,i,j;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
   {
         scanf("%d",&n);
         int a[100],b[100];
         double d[100];
         a[0]=2;b[0]=1;d[0]=(double)a[0]/b[0];
         for(j=1;j<n;j++)
         {
                a[j]=a[j-1]+b[j-1];
                b[j]=a[j-1];
                d[j]=(double)a[j]/b[j];
         }
         double c=0.0000000;
         for(j=0;j<n;j++)
        {
              c=c+d[j];
        }
        printf("%.3lf\n",c);
   }
}
