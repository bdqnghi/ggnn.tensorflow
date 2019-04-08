void chuanran(char a[110][110],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
			{
				if(a[i][j+1]=='.')
					a[i][j+1]='A';
				if(a[i][j-1]=='.')
					a[i][j-1]='A';
				if(a[i+1][j]=='.')
					a[i+1][j]='A';
				if(a[i-1][j]=='.')
					a[i-1][j]='A';
			}
		}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='A')
				a[i][j]='@';
		}
}
int main()
{
	int n;
	cin >> n;
	char a[110][110];
	int i,j;
	for(i=0;i<=n+1;i++)
		for(j=0;j<=n+1;j++)
		{
			if(i==0||j==0||i==n+1||j==n+1){
				a[i][j]='#';
				continue;
			}
			cin >> a[i][j];
		}
	int m;
	cin >> m;
	m--;
	while(m--)
		chuanran(a,n);
	int sum=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]=='@')
				sum++;
	cout << sum <<endl;
}
