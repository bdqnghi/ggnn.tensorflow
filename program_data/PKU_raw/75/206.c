int main()
{
	int i=1,j=1,k=1,l,m,n=1,max=0;
	int a[1003]={0},b[1008]={0},c[1008]={0};
	cin>>a[1];
	while(getchar()!='\n')
	{
		i++;
		n++;
		cin>>a[i];
	}
	cin>>b[1];
	while(getchar()!='\n')
	{
		j++;
		cin>>b[j];
	}
	max=b[1];
	for(i=1;i<=n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<max;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[j]<=i&&b[j]>i)
				c[i]++;
		}
	}
	m=max;
	max=c[0];

	for(i=0;i<m;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	cout<<n<<' '<<max;
}
