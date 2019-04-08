int main()
{
	int row, col, i, j, k, a[110][110]={0};
	cin >> row >> col;
	for (i=0; i<row; i++)
		for (j=0; j<col; j++)
			cin >> *(*(a+i)+j);						//???????
	for (k=0; k<row+col-1; k++)
	{
		i=0;
		j=k;
		while (j>=0)
		{
			if ((i<row)&&(j<col))
				cout << *(*(a+i)+j) << endl;		//????????
			i++;
			j--;
		}
	}
	return 0;										//main???????0
}