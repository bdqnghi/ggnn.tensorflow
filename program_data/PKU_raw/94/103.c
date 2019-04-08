int main()
{
	int a[501];
	int b[501];
	int n,m,i,j,e;
	cin>>n;
	m=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2!=0)//???????b
		{
			b[m+1]=a[i];
			m++;
		}
	}
	for(i=1;i<=m-1;i++)
		for(j=1;j<=m-i;j++)//????
			if(b[j]>b[j+1])
			{
				b[0]=b[j];
				b[j]=b[j+1];
				b[j+1]=b[0];
			}
	e=0;
	for(i=1;i<=m;i++)//??
	{
		if(e==1)
			cout<<',';
		cout<<b[i];
		e=1;
	}
	return 0;
}