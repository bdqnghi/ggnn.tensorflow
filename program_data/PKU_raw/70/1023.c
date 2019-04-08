main()
{
      int n;
      scanf("%d",&n);
      double dian[n][2];
      for(int i=0;i<n;i++)
      {
              scanf("%lf %lf",&dian[i][0],&dian[i][1]);
              //printf("%lf %lf\n",dian[i][0],dian[i][2]);
      }
      double max=0;
      double ss;
      for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
      {
              //printf("%lf\n",dian[i][0]);
              double a=dian[i][0]-dian[j][0];
              double b=dian[i][1]-dian[j][1];
              ss=a*a+b*b;
              if(ss>max)
              max=ss;
              //printf("ss%lf\n",ss);
      }
      printf("%.4lf",sqrt(max));
      //scanf("%d",&n);
}
