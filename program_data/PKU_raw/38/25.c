main()
{
      int n,i,j,m;
      double a[1000],x;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            double sum=0;
            scanf("%d",&m);
            for(j=0;j<m;j++)
            {
               scanf("%lf",&a[j]);
               sum=sum+a[j];
            }
            x=sum/m;
            sum=0;
            for(j=0;j<m;j++)
            {
                 sum=(a[j]-x)*(a[j]-x)+sum;
            }
            sum=sqrt(sum/m);
            printf("%.5f\n",sum);
      }
      getchar();
      getchar();
}  
