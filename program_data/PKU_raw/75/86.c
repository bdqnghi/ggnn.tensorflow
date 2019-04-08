int main()
{
	int a[2][1000],i=0,j,c=1000,b=0,m[1000]={0};
	while(1)
	{
		cin>>a[0][i];
		if (cin.get() =='\n')
			break;
		i++;
	}
	i = 0;
	while(1)
	{
		cin>>a[1][i];
		if (cin.get() =='\n')
			break;
		i++;
	}
	for(j=0;j<=i;j++)
	{
		if(a[0][j]<c)
			c=a[0][j];
		if(a[1][j]>b)
			b=a[1][j];
	}
	for(;c<b;c++)
		for(j=0;j<=i;j++)
		{
		if(a[0][j]<=c&&a[1][j]>c)
			m[c]++;
		}
		for(j=0;j<b;j++)
		{
			if(m[0]< m[j])
				m[0]=m[j];
		}
		cout << i+1 <<' '<<m[0];
		return 0;
}