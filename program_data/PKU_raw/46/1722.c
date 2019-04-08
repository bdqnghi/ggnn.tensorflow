//***********************************
//*   ????????              *
//*   ??????                  *
//*   ?????2011?11?5?       *
//***********************************


int main()
{
	int array[100][100];
	int row, col, i, j, p, count;
	cin >> row >> col;//???????
	for(i = 0; i < row; i ++)
	{
		for(j = 0; j < col; j ++)
		{
			cin >> array[i][j];//??????
		}
	}
	p = 0;//p???????????
	count = 0;//count?????????
	i = 0;
	j = 0;
	while(1)
	{
		for(j = count; j < col - count; j ++)
		{
			cout << array[i][j] << endl;
			p = p + 1;
		}//??????
		if(p == row * col)
			break;
		for(i = count + 1; i < row - count; i ++)
		{
			cout << array[i][j - 1] << endl;
			p = p + 1;
		}//??????
		if(p == row * col)
			break;
		for(j = col - count - 2; j >= count; j --)
		{
			cout << array[i - 1][j] << endl;
			p = p + 1;
		}//??????
		if(p == row * col)
			break;
		for(i = row - count - 2; i > count; i --)
		{
			cout << array[i][j + 1] << endl;
			p = p + 1;
		}//??????
		i = i + 1;
		if(p == row * col)
			break;//??????????????,??
		count = count + 1;
	}
	return 0;
}