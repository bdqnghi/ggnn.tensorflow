main()
{
      int k,i,g,n;
      double ans,j,temp;
      double a[1000];
      scanf("%d",&k);
      for(g=0;g<k;g++)
      {
                      scanf("%d",&n);
                      for(i=0;i<n;i++) scanf("%lf",&a[i]);
                      j=0.0;
                      temp=0.0;
                      for(i=0;i<n;i++) j+=1.0*a[i]/n;
                      for(i=0;i<n;i++) temp+=(a[i]-j)*(a[i]-j)*1.0;
                      ans=sqrt(temp/n);
                      printf("%.5lf\n",ans);
      }
      
}
