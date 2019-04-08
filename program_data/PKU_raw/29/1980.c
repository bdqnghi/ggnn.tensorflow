int main()
{
	int a[1000],i,m,n,j;
	float s=0;
	a[0]=1;
	a[1]=1;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			a[j+1]=a[j]+a[j-1];
			s=s+(float)a[j+1]/a[j];
		}
		printf("%.3f\n",s);
		s=0;
	}
	return 0;
}