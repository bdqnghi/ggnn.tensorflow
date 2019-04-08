
int main()
{
	int m,n,i,j,s=0;
	cin >> n;
	char ren1[102][102];
	char ren2[102][102];
	for(i=0;i<=101;i++)
		for(j=0;j<=101;j++)
		{
			ren1[i][j] = '\0';
		}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>ren1[i][j];
	for(i=0;i<=101;i++)
		for(j=0;j<=101;j++)
		{
			ren2[i][j] = ren1[i][j];
		}
	cin >> m;
	while(m>1)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(ren1[i][j] == '@')
				{
					if(ren1[i-1][j] == '.')
						ren2[i-1][j] = '@';
					if(ren1[i+1][j] == '.')
						ren2[i+1][j] = '@';
					if(ren1[i][j-1] == '.')
						ren2[i][j-1] = '@';
					if(ren1[i][j+1] == '.')
						ren2[i][j+1] = '@';
				}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				ren1[i][j] = ren2[i][j];
		m--;
	}
	for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(ren2[i][j] == '@')
					s++;
	cout << s;
	return 0;
}