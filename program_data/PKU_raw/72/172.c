int main()
{
	int h[20][20]={0},m,n,i,j;
	int flag[20][20]={0};
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>h[i][j];
		}
		
	}


	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+1>=0&&i+1<m&&h[i+1][j]>h[i][j])
			{
				flag[i][j]=1;
			}

			if(i-1>=0&&i-1<m&&h[i-1][j]>h[i][j])     //
			{
				flag[i][j]=1;
			}

			if(j-1>=0&&j-1<n&&h[i][j-1]>h[i][j])     //
			{
				flag[i][j]=1;
			}

			if(j+1>=0&&j+1<n&&h[i][j+1]>h[i][j])
			{
				flag[i][j]=1;
			}


		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)         //
		{
			if(flag[i][j]==0)
			{
				cout<<i<<" "<<j<<endl;
			}

		}
	}


	return 0;
}
