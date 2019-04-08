int main()
{
	int n;
	cin>>n;
	char a[n+2][n+2];
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	int m;
	cin>>m;
while(m-1)
{
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]=='@')
			{
				if(a[i][j-1]=='.')
					a[i][j-1]='^';
				if(a[i][j+1]=='.')
					a[i][j+1]='^';
				if(a[i-1][j]=='.')
					a[i-1][j]='^';
				if(a[i+1][j]=='.')
					a[i+1][j]='^';
			}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]=='^')
				a[i][j]='@';
				m--;
}
int sum=0;
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
		if(a[i][j]=='@')
			sum++;
cout<<sum;
return 0;

}
