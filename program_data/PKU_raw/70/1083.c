main()
{
      int i,j,n;
      double x[500],y[500],max=0,dis,disx,disy;
      scanf("%d",&n);
      for(i=0;i<n;i++)
          scanf("%lf %lf",&x[i],&y[i]);
      for(i=0;i<n;i++)
      {
          for(j=0;j<i;j++)
          {
              disx=x[i]-x[j];
              disy=y[i]-y[j];
              dis=sqrt(disx*disx+disy*disy);
              if(dis>max)
                  max=dis;
          }
      }
      printf("%.4lf",max);
      getchar();
      getchar();
}
