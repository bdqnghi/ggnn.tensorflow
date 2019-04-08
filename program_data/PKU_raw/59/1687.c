
int main() {
	int n;
	cin >>n;
	int room[100][100];
	for (int i=0;i<=n-1;++i)
	{
		for (int j=0;j<=n-1;++j)
		{
			char get;
			cin >>get;
			if (get=='.')
				room[i][j]=2;
			if (get=='#')
				room[i][j]=0;
			if (get=='@')
				room[i][j]=1;

		}
		getchar();
	}



	int day;
	cin >>day;
	for (int k=2;k<=day;++k)
	{
		for (int i=0;i<=n-1;++i)
		{
			for (int j=0;j<=n-1;++j)
			{
				if (room[i][j]==1)
				{
					if (i-1>=0)
					{
						if (room[i-1][j]==2)
							room[i-1][j]=3;
					}
					if (i+1<=n-1)
					{
						if (room[i+1][j]==2)
							room[i+1][j]=3;
					}
					if (j-1>=0)
					{
						if (room[i][j-1]==2)
							room[i][j-1]=3;
					}
					if (j+1<=n-1)
					{
						if (room[i][j+1]==2)
							room[i][j+1]=3;
					}
				}
			}
		}
		for (int i=0;i<=n-1;++i)
			for (int j=0;j<=n-1;++j)
				if (room[i][j]==3)
					room[i][j]=1;

	}






	int sumcought=0;
	for (int i=0;i<=n-1;++i)
	{
		for (int j=0;j<=n-1;++j)
		{
			if (room[i][j]==1)
				++sumcought;
		}
	}
	cout <<sumcought << endl;
	return 0;
}