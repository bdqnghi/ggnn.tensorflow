double f(double x1,double y1,double x2,double y2)
{
       return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
double x[10000]={0},y[10000]={0};
double d[10000]={0};
int i=0,j=0,k=0,n; 
main()
{
      scanf("%d",&n);
      for(i=0;i<=n-1;i++,j++)
      scanf("%lf%lf",&x[i],&y[i]);
      for(i=0;i<=n-1;i++)
      {
                       for(j=i;j<=n-1;j++)
                       {
                                        d[k]=f(x[i],y[i],x[j],y[j]);
                                        k++;
                       }
      }
      for(i=k-1;i>=1;i--)
      if(d[i]>d[i-1])
      d[i-1]=d[i];
      printf("%.4f\n",d[0]);
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
