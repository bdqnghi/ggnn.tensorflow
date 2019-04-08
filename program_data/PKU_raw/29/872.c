int main()
{
	float a[1000];
	float b[1000];
	int m,i,n,j;
	float s=0;
	a[1]=1;
	a[2]=2;
	for(i=3;i<999;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	b[1]=2;
	for(i=2;i<1000;i++)
	{
		b[i]=(a[i-1]/a[i])+1;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		s=s+b[j];
		printf("%.3f\n",s);
		s=0;
	}
	return 0;
}

