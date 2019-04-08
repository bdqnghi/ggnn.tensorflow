int main()
{
	int a[101][101] = {0, 0}, row, col, i, j, count = 0, r = 0;
	cin >> row >> col;
	if(col == 1)
		r = 1;
	for(i = 1 ; i <= row ; i++)
		for(j = 1 ; j <= col ; j++)
		{
			cin >> a[i][j];
		}
		i = 1;
		j = 1;
		while(count < row * col)
		{
			cout << a[i][j] << endl;
			count++;
			if((j == 1 && i != row) || (j != 1 && i == row) || (j == 1 && i == row))
			{
				if(i + j < col)
				{
					j = i + j;
					i = 1;
				}
				else
				{
					r++;
					i = r;
					j = col;
				}
			}
			else
			{
				i++;
				j--;
			}
		}
		return 0;
}
			
			

