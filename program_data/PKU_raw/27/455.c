int main()
{
    int n,i;
    double a[100],b[100],c[100], det,t,x,y;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&a[i-1],&b[i-1],&c[i-1]);
    }
    
    for(i=1;i<=n;i++)
    {
        det=b[i-1]*b[i-1]-4*a[i-1]*c[i-1];
        t=-b[i-1]/(2*a[i-1]);
        x=sqrt(det)/(2*a[i-1]);
        y=sqrt(-det)/(2*a[i-1]);
        if(det<0)
          {
                 if(t!=0)
           printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",t,y,t,y);
           else printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-t,y,-t,y);
           }
        else if(det>0)
           printf("x1=%.5lf;x2=%.5lf\n",x+t,t-x);
        else 
           printf("x1=x2=%.5lf\n",t);
    }
}