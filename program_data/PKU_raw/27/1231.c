// sqart.cpp : Defines the entry point for the console application.
//

int main(int argc, char* argv[])
{
 int i,n;
 scanf("%d",&n);
 double a[100],b[100],d[100],x1,x2;
 for(i=0;i<n;i++)
 {scanf("%lf%lf%lf",&a[i],&b[i],&d[i]);}
 for(i=0;i<n;i++)
 {
  
  if((b[i]*b[i]-4*a[i]*d[i])<0)
  { double m,n;
   m=-b[i]/(2*a[i]);
   n=sqrt(4*a[i]*d[i]-b[i]*b[i])/(2*a[i]);
   printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,n,m,n);
  }
  else if((b[i]*b[i]-4*a[i]*d[i])>0)
  {
   x1=( -b[i]+ sqrt(b[i]*b[i]-4*a[i]*d[i]))/(2*a[i]);
            x2=( -b[i]- sqrt(b[i]*b[i]-4*a[i]*d[i]))/(2*a[i]);
   printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
  }
  else
  {
   double k;
   k=-b[i]/(2*a[i]);
   printf("x1=x2=%.5lf\n",k);
  }
 }
 return 0;
}
