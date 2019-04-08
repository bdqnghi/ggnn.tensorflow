int main()
{
	int a[6][6],i,j,k,n,m,x[6],y[6],gg,mm,o=0;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++) cin >>a[i][j];
	}
	m=-88888888;
	n=888888888;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++) 
		{
			if (a[i][j]>m) 
			{
				m=a[i][j];
				gg=j;
			}
		}
		x[i]=gg;
		m=-8888888;
	
	}
		for (j=1;j<=5;j++)
	{
		for (i=1;i<=5;i++) 
		{
			if (a[i][j]<n) 
			{
				n=a[i][j];
				mm=i;
			}
		}
		y[j]=mm;
		n=8888888;
	}

	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			if (y[x[i]]==i&&x[y[j]]==j)
			{
				cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
				o++;
			}
		}
	}
	if (o==0) cout <<"not found";
	return 0;
}