int main()
{
    int i,j,k,n;
    double x1[100],x2[100];
    double a[100],b[100],c[100],d[100];
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%lf %lf %lf\n",&a[i],&b[i],&c[i]);
    d[i]=b[i]*b[i]-4*a[i]*c[i];
    }
    for(i=1;i<=n;i++)
    {
    if(d[i]>0)
    {
              x1[i]=(-b[i]+sqrt(d[i]))/(2*a[i]);
              x2[i]=(-b[i]-sqrt(d[i]))/(2*a[i]);
              printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
    }
    if(d[i]==0)
    {
               x1[i]=x2[i]=(-b[i]+sqrt(d[i]))/(2*a[i]);
               printf("x1=x2=%.5lf\n",x1[i]);
    }
    if(d[i]<0)
    {
              if(b[i]==0)
              {
                         x1[i]=b[i]/(2*a[i]);
                         x2[i]=sqrt(-d[i])/(2*a[i]);
                         printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1[i],x2[i],x1[i],x2[i]);
              }
              else
              {
              x1[i]=-(b[i]/(2*a[i]));
              x2[i]=sqrt(-d[i])/(2*a[i]);
              printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1[i],x2[i],x1[i],x2[i]);
              }
    }
    }
    return 0;
}
