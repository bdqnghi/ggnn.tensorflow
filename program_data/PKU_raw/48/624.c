int main()
{
	int a[11][11],b[11][11];
	int i,j,k,m,n;
	cin>>m>>n;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			a[i][j]=0;
		}
	}
	a[5][5]=m;
	for(k=0;k<n;k++)
	{
		for(i=0;i<11;i++)
		{
			for(j=0;j<11;j++)
			{
				b[i][j]=a[i][j];
			}
		}
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			{
				if(b[i][j]!=0)
				{
				a[i][j]+=b[i][j];
				a[i-1][j]+=b[i][j];
				a[i-1][j-1]+=b[i][j];
				a[i-1][j+1]+=b[i][j];
				a[i][j+1]+=b[i][j];
				a[i][j-1]+=b[i][j];
				a[i+1][j]+=b[i][j];
				a[i+1][j-1]+=b[i][j];
				a[i+1][j+1]+=b[i][j];
				}
			}

		}
	}
	k=0;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			cout<<a[i][j];
			k++;
			if(k%9!=0)
				cout<<" ";
			else
				cout<<endl;
		}
	}

	return 0;
}