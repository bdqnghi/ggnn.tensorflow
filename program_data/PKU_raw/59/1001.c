int main()
{
	int n,day;
	char array[100][100];
	char temp[100][100];
	cin>>n;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			cin>>array[i][j];
	cin>>day;
	for (int d=1;d<day;d++)
	{
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)
				temp[i][j]=array[i][j];
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				if (temp[i][j]=='@')
				{
					if (i>0 && temp[i-1][j]=='.') array[i-1][j]='@';
					if (i<n-1 && temp[i+1][j]=='.') array[i+1][j]='@';
					if (j>0 && temp[i][j-1]=='.') array[i][j-1]='@';
					if (j<n-1 && temp[i][j+1]=='.') array[i][j+1]='@';
				}
			}
		}
	}
	int sum=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (array[i][j]=='@') 
				sum++;
		}
	}
	cout<<sum;
	return 0;
}
