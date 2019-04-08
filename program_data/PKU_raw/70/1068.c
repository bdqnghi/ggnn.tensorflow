double dis(double x,double y)
{
      double s;
      s=sqrt(x*x+y*y);
      return s; 
}
main()
{
      double a[L]={0},b[L]={0},S[L]={0};
      int n,i,j,k;
      double D;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
             scanf("%lf %lf",&a[i],&b[i]);                       
      }
      for(i=1;i<n;i++)
      {
            double max=0;
            double s=0;
            for(j=i+1;j<=n;j++)
            {
                   double x=a[i]-a[j];
                   double y=b[i]-b[j];
                   s=dis(x,y);
                   if(s>max)
                   max=s;            
            }
            S[i]=max;          
      }
      for(i=1;i<n;i++)
      {
            if(S[i]>D)
            D=S[i];          
      }
      printf("%.4lf",D);
      getchar();
      getchar(); 
      getchar();
      getchar();
}
