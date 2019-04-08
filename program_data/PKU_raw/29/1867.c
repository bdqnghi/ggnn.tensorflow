
int main()
{
	int m,n,i,j;
	scanf("%d", &m);
	float a[200];
	float b[200];
	float s;
	a[1]=2;
	a[2]=3;
	b[1]=1;
	b[2]=2;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		s=0;
		for(j=1;j<=n;j++)
		{
			a[j+2]=a[j]+a[j+1];
			b[j+2]=b[j]+b[j+1];
			s=s+(a[j]/b[j]);
		}
		printf("%.3f\n", s);
	}

	return 0;
}
