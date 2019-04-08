int main()
{
	int board[9][9],temp[9][9];
	int n;
	memset(board,0,81*sizeof(int));
	cin>>board[4][4]>>n;
	while(n--)
	{
		memset(temp,0,81*sizeof(int));
		for(int i=1;i<8;i++)
		{
			for(int j=1;j<8;j++)
			{
				if(board[i][j]>0)
				{
					temp[i][j]+=(2*board[i][j]);
					temp[i-1][j-1]+=board[i][j];
					temp[i-1][j]+=board[i][j];
					temp[i-1][j+1]+=board[i][j];
					temp[i][j-1]+=board[i][j];
					temp[i][j+1]+=board[i][j];
					temp[i+1][j-1]+=board[i][j];
					temp[i+1][j]+=board[i][j];
					temp[i+1][j+1]+=board[i][j];
				}
			}
		}
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				board[i][j]=temp[i][j];
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		cout<<board[i][0];
		for(int j=1;j<9;j++)
		{
			cout<<' '<<board[i][j];
		}
		cout<<endl;
	}
	return 0;
}