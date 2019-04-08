double x[1005],y[1005];
int main()
{
int n,i,j;
double max=0;
scanf ("%d",&n);
for (i=0;i<n;i++) scanf("%lf%lf",&x[i],&y[i]);
for (i=1;i<n;i++)
for (j=0;j<i;j++){
double dist=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
if (dist>max)
max=dist;
}
printf("%.4lf\n",sqrt(max));
return 0;
}