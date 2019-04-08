//******************************************
//*????????????.cpp           **
//*??: ??     1100012808              **
//*???2011.10.31                       **
//******************************************
int main()  //???
{        //?????
	int row, col, array[100][100] = {0}, i = 0, j = 0;
	int flag[100][100] = {0}, k = 0, l = 1;
	cin >> row >> col;
	for (i = 0; i < (row * col); i++)
		cin >> array[i / col][i % col];
	i = 0;
	for (k = 0; k < col; k++)
	{
		j = k;
		for (i = 0; i < row; i++)
		{
			if ((j != -1) && (i != row))
			{
				cout << array[i][j] << endl;
				j--;
			}
			else break;
		}
		if (k == col - 1)
		{
			i = 1;	
			for (l = 1; l < row; l++)
			{
				j = col - 1;
				for (i = l; (j != -1) && (i != row); i++)
				{
					cout << array[i][j] << endl ;
					j--;
				}
			}
		}
	}
    return 0;
}





