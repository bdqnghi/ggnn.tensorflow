int main()
{
    int n;
    scanf("%d", &n);
    double a[100],b[100],c[100];
    int i;
    double delta[100];
    double x1,x2;
    double x11,x12,x21,x22;
    double mo[100];
    double e[100];
    
    for(i=1;i<=n;i++)
    {
                     scanf("%lf%lf%lf", &a[i], &b[i], &c[i]);
                     delta[i]= b[i]*b[i]-4*a[i]*c[i];
                     e[i]=(b[i]==0) ?0 : (-b[i])/(2 * a[i]);
    }
 
    for(i=1;i<=n;i++)
    {
                     if(delta[i]>0)
                     {
                                   x1=e[i]+sqrt(delta[i])/(2*a[i]);
                                   x2=e[i]-sqrt(delta[i])/(2*a[i]);
                                   printf("x1=%.5lf;x2=%.5lf\n", x1,x2);
                                   continue;
                     }
                     else if(delta[i]<0)
                     {
                           mo[i]=sqrt(-delta[i]);
                           x11=e[i];
                           x12=mo[i]/(2*a[i]);
                           x21=x11;
                           x22=mo[i]/(2*a[i]);
                           printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x11,x12,x21,x22);
                           continue;
                     }
                     else if(delta[i]<pow(10,-8))
                     {
                                   x1=e[i];
                                   printf("x1=x2=%.5lf\n", x1);
                     
                     }
                     
    }
    return 0;
}       
                                   
