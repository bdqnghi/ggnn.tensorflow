main()
{
                int i,n;
                double a[100],b[100],c[100],d[100],x[100],y[100];
                scanf("%d",&n);
                i=0;
                for(i=0;i<n;i++)
                {
                          scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
                }
                i=0;
                while(i<n)
                {
                          if(b[i]*b[i]-4*a[i]*c[i]>=0)
                          {
                          x[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
                          y[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
                          if(x[i]==y[i])
                          printf("x1=x2=%.5lf\n",x[i]);
                          else printf("x1=%.5lf;x2=%.5lf\n",x[i],y[i]);
                          }
                          else
                          {
if(b[i]==0)
{
                              d[i]=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
                              x[i]=b[i]/(2*a[i]);
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x[i],d[i],x[i],d[i]);
}
else
{
d[i]=sqrt(-b[i]*b[i]+4*a[i]*c[i])/(2*a[i]);
                              x[i]=-b[i]/(2*a[i]);
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x[i],d[i],x[i],d[i]);
}
                      }
                          i=i+1;
                }
}

