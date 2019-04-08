void suo(int b[101][101],int n)
{
	int row=0,l=0;
	for(int i=1;i<n-1;i++)
		for(int j=0;j<n;j++)
			b[i][j]=b[i+1][j];
	for(int j=1;j<n-1;j++)
		for(int i=0;i<n;i++)
			b[i][j]=b[i][j+1];
return;
}

int square(int a[101][101],int n)
{
	if(n==1)
		return 0;
	for(int i=0;i<n;i++)
	{
		int min=a[i][0];
		for(int j=1;j<n;j++)
			if(min>a[i][j])
				min=a[i][j];
		for(int j=0;j<n;j++)
			a[i][j]-=min;
	}
	for(int i=0;i<n;i++)
	{
		int min=a[0][i];
		for(int j=1;j<n;j++)
			if(min>a[j][i])
				min=a[j][i];
		for(int j=0;j<n;j++)
			a[j][i]-=min;
	}
	int t=a[1][1];
	int sum=0;
	suo(a,n);
	sum=t+square(a,n-1);
	return sum;
}
int main()
{
	int i,n,k,j,m[101][101];
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>m[j][k];
		cout<<square(m,n)<<endl;
	}
return 0;
}