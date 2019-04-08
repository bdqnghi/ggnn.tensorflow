main()
{
      int i,j,n;
      scanf ("%d",&n);
      double a[n+1],b[n+1],max=0.0;
      for (i=0;i<n;i++)
      scanf ("%lf %lf",&a[i],&b[i]);
      for (i=0;i<n;i++)
      {
          for (j=i+1;j<n;j++)
          {
              if ((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])>max)
              max=(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]);
          }
      }
      printf ("%.4f\n",sqrt(max));
      
}