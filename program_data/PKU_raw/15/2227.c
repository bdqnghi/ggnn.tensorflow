int main()
{
	int n,i,j,leftrow,leftcolumn,rightrow,rightcolumn,s;
	int a[1000][1000];
	cin >> n;
	for(i = 0 ; i < n + 2 ; i++)
	{
		for(j = 0 ; j < n + 2 ; j++)
		{
			a[i][j] = 255;
		}
	}
	for(i = 1 ; i < n + 1 ; i++)
	{
		for(j = 1 ; j < n + 1 ; j++)
		{
			cin >> a[i][j];
		}
	}
	for(i = 1 ; i < n + 1 ; i++)
	{
		for(j = 1 ; j < n + 1 ; j++)
		{
			if(a[i][j]==0 && a[i-1][j] == 255 && a[i][j-1] ==255)
			{
				leftrow = i;
				leftcolumn =j;
			}
			if(a[i][j]==0 && a[i+1][j] == 255 && a[i][j+1] ==255)
			{
				rightrow = i;
				rightcolumn =j;
			}
		}
	}
	s = (rightcolumn - leftcolumn - 1) * (rightrow - leftrow - 1);
	cout << s;
}