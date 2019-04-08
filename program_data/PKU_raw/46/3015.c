
int main()
{
	int a[101][101];
    int row, col, i, j, k, h, counter = 0, mul;

	cin >> row >> col;
	mul = row * col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];	
	if (col % 2 == 0)
		h = col / 2;
	else 
        h = col / 2 + 1;
	for (k = 0; k < h; k++)
	{
	    for (i = k, j = k; j < col - k; j++)
		{  
			if (counter < mul)
			    cout << a[i][j] << endl;
			counter++;
		}
		j--;
		for (i = 1 + k; i < row - k; i++)
		{ 
            if (counter < mul)
			    cout << a[i][j] << endl;
			counter++;
        }
		i--;
		for (j = col - 2 - k; j >= k; j--)
		{
		    if (counter < mul)
			    cout << a[i][j] << endl;
			counter++;
		}
		j++;
		for (i = row - 2 - k; i > k; i-- )
		{	
            if (counter < mul)
			    cout << a[i][j] << endl;
			counter++;
		}
		i++;
	}
      return 0;
}
