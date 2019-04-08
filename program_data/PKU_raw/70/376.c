int main()
{
int n,m,i,j;
double s=0,l=0;
double x[1000],y[1000];
scanf("%d",&n);
for(m=0;m<n;m++)
{
scanf("%lf%lf",&x[m],&y[m]);
}
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
s=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
if(l<s)
{
	l=s;
}
}
printf("%.4lf",l);
return 0;
}