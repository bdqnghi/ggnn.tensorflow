

char a[102][102];
int flag[102][102];

int main()
{
	int n,i,j,k,m,num=0;
	cin >> n;
	for (i=0;i<=101;i++)
		for (j=0;j<=101;j++)
		{
			a[i][j] = '0';
			flag[i][j] = 1;
		}
	
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			cin >> a[i][j];		
		}
	cin >> m;
	
	for (i = 0; i < m - 1; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= n; k++)
			{
				if (a[j][k]=='@' && flag[j][k])
				{
					if (a[j+1][k] == '.') 
					{
						a[j+1][k] = '@'; 
						flag[j+1][k] = 0;
					}
					if (a[j-1][k] == '.') 
					{
						a[j-1][k] = '@'; 
						flag[j-1][k] = 0;
					}
					if (a[j][k+1] == '.') 
					{
						a[j][k+1] = '@'; 
						flag[j][k+1] = 0;
					}
					if (a[j][k-1] == '.') 
					{
						a[j][k-1] = '@'; 
						flag[j][k-1] = 0;
					}
				}
			
			}
		}
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= n; k++)
			{
				flag[j][k] = 1;
			}
		}
	}

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (a[i][j] == '@') num++;
		}
	cout << num << endl;
	return 0;
}