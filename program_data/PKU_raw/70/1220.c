main()
{
      
      int n,i,j;
      scanf("%d",&n);
      double a[n],b[n],max;
      for(i=0;i<n;i++)
      scanf("%lf%lf",&a[i],&b[i]);
      max=sqrt((a[1]-a[0])*(a[1]-a[0])+(b[1]-b[0])*(b[1]-b[0]));
      for(i=1;i<n-1;i++)
      {
        for(j=i+1;j<n;j++)
        {if(sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]))>max)
        max=sqrt((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]));
        }
      }
      printf("%.4lf\n",max);
} 
       
