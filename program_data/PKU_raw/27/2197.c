int main()
{
    double a[100],b[100],c[100],d,e,f;
    int n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){scanf("%lf%lf%lf", &a[i],&b[i],&c[i]);}
    for(i=1;i<=n;i++){
                      d=b[i]*b[i]-4*a[i]*c[i];
                      e=-b[i]/(2*a[i]);
                      if(e==0){e=0.00000;}
                      f=sqrt(fabs(d))/(2*a[i]);
                      if(d==0){printf("x1=x2=%.5lf", e);}
                      if(d>0){printf("x1=%.5lf;x2=%.5lf", (e+f),(e-f));}
                      if(d<0){printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", e, f, e, f);}
                      if(i<n){printf("\n");}
                      }
    return 0;
    }
