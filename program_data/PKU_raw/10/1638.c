
int main()
{
	int a[30][3],i,j,n,m,max;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i][1];
		a[i][2]=0;
	}
	a[1][2]=1;
	m=0;
	for (i=2;i<=n;i++)
	{
		max=0;
		for (j=1;j<=i-1;j++)
			if ((a[j][1]>=a[i][1])&&(a[j][2]>max))
				max=a[j][2];
		a[i][2]=max+1;
		if (a[i][2]>m) m=a[i][2];
	}
	cout<<m<<endl;
	return 0;
}
