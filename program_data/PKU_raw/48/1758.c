int main()
{
	int m,n,i,j,k;
	int a[11][11]={0},b[11][11]={0};
	cin>>m>>n;
	a[5][5]=m;
	while(n--)
	{
		memset(b,0,sizeof(a));
		for(i=1;i<=9;i++)
			for(j=0;j<=9;j++)
			{
				k=a[i][j];
				b[i][j]+=(2*k);
				b[i-1][j]+=k;
				b[i-1][j-1]+=k;
				b[i-1][j+1]+=k;
				b[i][j-1]+=k;
				b[i][j+1]+=k;
				b[i+1][j]+=k;b[i+1][j-1]+=k;b[i+1][j+1]+=k;
				a[i][j]=0;
			}
			for(i=1;i<=9;i++)
				for(j=1;j<=9;j++)
					a[i][j]=b[i][j];
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			cout<<a[i][j];
			if(j!=9)cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}