//********************************
//*?? ?????????? *****
//*????? 1300012753     ***** 
//*???2013.11.01          *****   
//********************************
int main()
{
	int row, col;
	int a[100][100];
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int sum = 0; sum <= row + col - 2; sum++)
	{
		for (int i = 0; i <= sum; i++)
		{
			if(i > row - 1)
			break;
			for (int j = 0; j <= sum; j++)
			{
				if(j > col - 1)
				break;
				if(i + j == sum)
				cout << a[i][j] << endl;
			}
		}
	}
	return 0;
} 