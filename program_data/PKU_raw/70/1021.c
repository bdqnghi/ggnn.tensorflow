main()
{
      double x[2011],y[2011],k,l,max;
      int n,j,i;
      scanf("%d",&n);
      for(i=0;i<n;i++)
         {
          scanf("%lf",&x[i]);
          scanf("%lf",&y[i]);
          }
      max=0;    
      for(i=0;i<n-1;i++)
         for(j=i+1;j<n;j++)
            {
             k=x[i]-x[j];
             l=y[i]-y[j];              
             k=sqrt(k*k+l*l);
             if(k>max)max=k;
             }
      printf("%.4lf\n",max);
      //getchar();
      //getchar();
      }                                     
