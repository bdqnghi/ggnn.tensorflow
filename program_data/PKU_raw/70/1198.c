int main()
{
int i, j, k, l, n;
double x[100], y[100], dis, sum, xj, yj, zdj=0;
scanf("%d", &n);
for(i=0;i<n;i++)
{
	scanf("%lf%lf", &x[i], &y[i]);
	for(j=0;j<i;j++)
	{
		xj=x[i]-x[j];
	yj=y[i]-y[j];
	dis=sqrt(xj*xj+yj*yj);
	if(dis>zdj)
	{
		zdj=dis;
	}
	}
}
	printf("%.4lf", zdj);
		return 0;
}