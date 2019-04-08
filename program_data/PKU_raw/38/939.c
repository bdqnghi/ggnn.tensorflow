int main()
{
  int k,n,i,j;
  double x[100],a,s;
  scanf("%d",&k);
  for (j=0;j<k;j++)
  {
    scanf("%d",&n);
    a=0;s=0;
    for (i=0;i<n;i++) scanf("%lf",&x[i]);
    for (i=0;i<n;i++) a+=x[i];
    a=a/n;
    for (i=0;i<n;i++) s+=(x[i]-a)*(x[i]-a);
    s=sqrt(s/n);
    printf("%.5f\n",s);
  }
  return 0;
}