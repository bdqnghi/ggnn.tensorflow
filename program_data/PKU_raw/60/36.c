void main()
{
	int n,i,m;
	int a[10000];
	int k=0;
	scanf("%d",&n);
	for(m=2;m<=n;m++)
	{
		for(i=2;i<=sqrt(m);i++)
			if(m%i==0) break;
		if(i>sqrt(m))
		{
			a[k]=m;
			k=k+1;
		}
	}
	m=0;
//	printf("%d",a[0]);
	for(i=0;i<k;i++)
	{
		if(a[i]==a[i+1]-2)
		{
			printf("%d %d\n",a[i],a[i+1]);
			m=m+1;
		}
	}
	if(m==0)
		printf("empty");
}