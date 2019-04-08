
int main ()
{
	int a[1000],b[1000],i;
	double c[1000];
	a[0]=2;a[1]=3;b[0]=1;b[1]=2;
	for(i=2;i<1000;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	for(i=0;i<1000;i++)
	{
		c[i]=a[i]*1.0/b[i];
	}
	int m,n[100],j;
	double sum[100];
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{    
		sum[j]=0;
		scanf("%d",&n[j]);	
		for(i=0;i<n[j];i++)
		{
			sum[j]+=c[i];
		}
		printf("%.3lf\n",sum[j]);

	}
     return 0;
}
