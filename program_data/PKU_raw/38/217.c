double S(void)
{
	int i,n;
	double a[100],*p,aver=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%lf",&a[i]);aver+=a[i];}
	aver=aver/n;
	for(p=a,i=0;i<n;i++)
	{s+=(*(p+i)-aver)*(*(p+i)-aver);}
	return (sqrt(s/n));
}
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("%.5lf\n",S());}
	return 0;
}