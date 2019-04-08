void jisuanb(double b[],int n,double a[])
{
	int i;
	for(i=1;i<=n;i++)
	{
		a[i+2]=a[i]+a[i+1];
		b[i]=a[i+1]/a[i];
	}
}
int main()
{
	double sum=0,b[100],a[100];
	int m,i,n[100];
	a[1]=1;
	a[2]=2;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++)
	{
		sum=0;
		jisuanb(b,n[i],a);
		int j;
		for(j=0;j<n[i];j++)
		{
//			printf("xunhuan\n");
			sum+=b[j+1];
		}
		printf("%.3f\n",sum);
	}
	return 0;
}