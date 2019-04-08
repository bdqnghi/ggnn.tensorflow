

char room[101][101];

void get(int i, int j)
{
	if (room[i-1][j]=='.')
	{
		room[i-1][j]='*';
	}
	if (room[i+1][j]=='.')
	{
		room[i+1][j]='*';
	}
	if (room[i][j-1]=='.')
	{
		room[i][j-1]='*';
	}
	if (room[i][j+1]=='.')
	{
		room[i][j+1]='*';
	}
}

int main()
{
	int i,j,k,n,m;

	cin>>n;
	cin.get();

	for (i=0;i<n;i++)
		cin>>room[i];

	cin>>m;

	for (k=1;k<m;k++)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (room[i][j]=='@')
					get(i,j);
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (room[i][j]=='*')
					room[i][j]='@';
			}
		}
	}

	int counter=0;

	for (i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
		{
			if (room[i][j]=='@')
				counter++;
		}
	}

	cout<<counter;


	return 0;
}

