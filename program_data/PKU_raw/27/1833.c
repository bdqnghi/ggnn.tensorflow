double fuhao(double x)
{
  double result;
  if ((x<0)&&(0-x<0.00001))
   result=0;
  else result=x;
  return result;
}
int main()
{
  double a[100],b[100],c[100],x1[100],x2[100],delta[100];
  int n,i,decide[100];
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
    delta[i]=b[i]*b[i]-4*a[i]*c[i];
    //printf("input done,delta=%f\n",delta[i]);
  }
  for (i=0;i<n;i++)
  {
    if (delta[i]>0) decide[i]=1;
    else
      if (delta[i]<0) decide[i]=-1;
      else decide[i]=0;
    if (decide[i]==1)
      {
        printf("x1=%.5f;x2=%.5f\n",(fuhao((0-b[i]+sqrt(delta[i]))/(2*a[i]))),(fuhao((0-b[i]-sqrt(delta[i]))/(2*a[i]))));
      }
    else
      if (decide[i]==0) printf("x1=x2=%.5f\n",fuhao((0-b[i])/(2*a[i])));
      else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",fuhao((0-b[i])/(2*a[i])),(sqrt(-delta[i]))/(2*a[i]),fuhao((0-b[i])/(2*a[i])),((sqrt(-delta[i]))/(2*a[i])));
  }
  return 0;
}

