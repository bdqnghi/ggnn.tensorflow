int main(int argc, char *argv[])
{
  double a[100][3],delta,x1,x2,real1,real2,imz1,imz2;
  int n,i,j;
  scanf("%d",&n);
  for (i=0;i<=n-1;i++)
  {
      for (j=0;j<=2;j++)
      {
          scanf("%lf",&a[i][j]);
      }
      delta=a[i][1]*a[i][1]-4*a[i][0]*a[i][2];
      if (delta>0)
      {x1=((-1)*a[i][1]+sqrt(delta))/(2*a[i][0]);
      x2=((-1)*a[i][1]-sqrt(delta))/(2*a[i][0]);
      printf("x1=%.5lf;x2=%.5lf\n",x1,x2);}
      else if (fabs(delta)<1e-5)
      {x1=((-1)*a[i][1])/(2*a[i][0]);
      printf("x1=x2=%.5lf\n",x1);}
      else
      {real1=(-1)*a[i][1]/(2*a[i][0]);
      imz1=sqrt((-1)*delta)/(2*a[i][0]);
      real2=(-1)*a[i][1]/(2*a[i][0]);
      imz2=sqrt((-1)*delta)/(2*a[i][0]);
      if (fabs(real1)<1e-5)
      real1=fabs(real1);
      if (fabs(real2)<1e-5)
      real2=fabs(real2);
      printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",real1,imz1,real2,imz2);}
  }
  	
  return 0;
}
