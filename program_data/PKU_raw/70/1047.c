main()
{
      int n,k=0;
      scanf("%d",&n);
      float a[n],b[n],d[10000],max=0;
      for(int i=0;i<10000;i++)
        d[i]=0;
      for(int i=0;i<n;i++)
      {
              scanf("%f %f",&a[i],&b[i]);
      }
      for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
                d[k]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
                k++;
        }
      for(int i=0;i<k;i++)
      {
              if(d[i]>max)
                max=d[i];
      }
      printf("%.4f",max);
}