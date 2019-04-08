int main()
{
	int a[102][102] = {0},s[102][102] = {0};
	int n,m,i,j,l,count = 0;//?????.?1 ?????#?0 ???@?3
	char x;
	cin >> n;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= n;j++)
		{
			cin >> x;
			if(x == '.')
				{
					a[i][j] = 1;
					s[i][j] = 1;
				}
			if(x == '#')
				{
					a[i][j] = 0;
					s[i][j] = 0;
			    }
			if(x=='@')
				{
					a[i][j] = 3;
					count++;
				}
		}
	cin >> m;
	for(l = 1;l <= m - 1;l++)
	{
		for(i = 1;i <= n;i++)
			for(j = 1;j <= n;j++)
			{
				if(a[i][j] == 1 && (a[i-1][j] == 3 || a[i+1][j] == 3 || a[i][j+1] == 3 || a[i][j-1] == 3))
				{
					s[i][j] = 3;
					count++;
				}	
			}
		for(i = 1;i <= n;i++)
			for(j = 1;j <= n;j++)
			{
				a[i][j] = s[i][j];
			}
	}
	cout<<count<<endl;
	return 0;
}
            
        
    
    