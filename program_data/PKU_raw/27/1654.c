main()
{
    int n,i;
    double a[100]={0},b[100]={0},c[100]={0},d,e,f;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
//    printf("%f %f %f",a[1],b[1],c[1]);
    for (i=1;i<=n;i++)
    {
      d=b[i]*b[i]-4*a[i]*c[i];
      e=-b[i]/(2*a[i]);
     {if ((e<0.000001)&&(e>-0.000001))
      e=0;}
      if (d>0.000001)
        printf("x1=%.5f;x2=%.5f\n",(-b[i]+sqrt(d))/(2*a[i]),(-b[i]-sqrt(d))/(2*a[i]));
      else if (d<-0.000001)
        {
        f=sqrt(-d)/(2*a[i]);
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
        }
      else
        printf("x1=x2=%.5f\n",e);
    }
}
