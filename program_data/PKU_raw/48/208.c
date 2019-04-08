const int Length = 9;
int board[Length][Length] = {0};
void f(int m, int n)
{
	int i,j;
	int temp[Length][Length] = {0};
	if(n == 0) board[4][4] = m;
	else
	{
		f(m,n-1);
		for(i=0;i<Length;i++)
		{	
			for(j=0;j<Length;j++)
			{
				temp[i][j] = board[i][j];
				board[i][j] = 0;
			}
		}
		for(i = 0; i<Length ; i++)
		{
			for(j = 0; j<Length ;j++)
			{
				if(temp[i][j] != 0)
				{
					board[i][j] += temp[i][j] *2;
					board[i+1][j]+= temp[i][j];
					board[i-1][j]+= temp[i][j];
					board[i][j+1]+= temp[i][j];
					board[i][j-1]+= temp[i][j];
					board[i-1][j-1]+= temp[i][j];
					board[i+1][j+1]+= temp[i][j];
					board[i-1][j+1]+= temp[i][j];
					board[i+1][j-1]+= temp[i][j];
				}
			}
		}
	}
}
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	f(m,n);
	for(i=0;i<Length;i++)
	{
		for(j=0;j<Length-1;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<board[i][Length-1]<<endl;
	}
	return 0;
}