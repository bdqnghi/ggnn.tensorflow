main()
{
     int n;
     double a[50000],b[50000],k=0;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
          scanf("%lf %lf",&a[i],&b[i]);
     }
     for(int i=1;i<=n;i++)
     {
             for(int j=1;j<=n;j++)
             {
                     double s;
                     s=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
                     s=sqrt(s);
                     if(s>k)
                     k=s;
             }
     }
     printf("%.4lf",k);

}
