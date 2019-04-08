int main()
{
	int a[1001][2],i,j,count,n,num=0;
	char c=',';
	for(i=1;c==',';i++)
		cin>>a[i][0]>>c;
	n=i-1;
	a[1][1]=c-'0';
	cin>>c;
	while (c!=',')
	{
		a[1][1]=a[1][1]*10+c-'0';
		cin>>c;
	}
	for(i=2;i<=n-1;i++)
		cin>>a[i][1]>>c;
	cin>>a[n][1];
	
	int min, max;
	min=a[1][0];
	max=a[1][1];
	for(i=2;i<=n;i++)
	{
		if(a[i][0]<min)
			min=a[i][0];
		if(a[i][1]>max)
			max=a[i][1];
	}
	for(i=min; i<=max-1;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{
			if(i>=a[j][0]&&i<a[j][1])
				count++;
		}
		if(count>num)
			num=count;
	}

	cout <<n<<" "<<num;
	return 0;
}
