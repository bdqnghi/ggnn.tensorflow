int main()
{
	int n,m;
    char array[200][200],temp[200][200];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>array[i][j];
			temp[i][j]=array[i][j];
		}
	}
	cin>>m;
	for (int day=0;day<m-1;day++)
	{
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				if (temp[i][j]=='@') 
				{
					if (j<n-1 && array[i][j+1]!='#') array[i][j+1]='@';
					if (j>0 && array[i][j-1]!='#') array[i][j-1]='@';
					if (i<n-1 && array[i+1][j]!='#') array[i+1][j]='@';
					if (i>0 && array[i-1][j]!='#') array[i-1][j]='@';
				}
			}
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				temp[i][j]=array[i][j];
			}
		}
	}
	int sum=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (array[i][j]=='@') sum++;
		}
	}
	cout<<sum;
	return 0;
}