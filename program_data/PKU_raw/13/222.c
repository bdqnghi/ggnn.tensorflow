int main()
{
	int a[20000]={0};
	int b[20000]={0};
    int n,i,j,t,m;
    cin >>n;
    for(m=0;m<=n-1;m++)
	{
		cin >> a[m];
	}
    for(i=0;i<=n-1;i++)
    {
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			b[i]=1;
		}
	}
	cout << a[0];
    for(t=1;t<=n-1;t++)
	{
		if(b[t]==0)
		cout << " " << a[t];

	}
	return 0;
}
