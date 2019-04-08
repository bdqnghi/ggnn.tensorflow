int main()
{
	int n,m,i,j,a[100];
	double c;
	c=0;
	scanf("%d",&m);
	a[1]=1;
	a[2]=2;
	for(i=3;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];
}
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			c=c+(double)a[j+1]/a[j];
		}
		printf("%.3lf\n",c);
c=0;
	}
	return 0;
}
