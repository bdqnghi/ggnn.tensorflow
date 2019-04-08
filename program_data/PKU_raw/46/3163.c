int array[99][99];
int x, y, row, col;
void out(int x0, int y0, int wid, int len)
{
	x = x0;
	y = y0;
	for (; x < x0 + wid; x++)
	{
		cout << array[x][y] << endl;
	}
	x--;
	for (y++; y < y0 + len; y++)
	{
		cout << array[x][y] << endl;
	}
	y--;
	for (x--; x >= x0; x--)
	{
		if (wid == 1)
		{
			break;
		}
		if (len == 1)
		{
			break;
		}
		cout << array[x][y] << endl;
	}
	x++;
	for (y--; y > y0; y--)
	{
		if (wid == 1)
		{
			break;
		}
		if (len == 1)
		{
			break;
		}
		cout << array[x][y] << endl;
	}
	y++;
	if (wid <= 2 || len <= 2)
	{
		1;
	}
	else
	{
		out(x0 + 1, y0 + 1, wid - 2, len - 2);
	}
}

int main()
{
	cin >> row >> col;
	for (y = 0; y < row; y++)
	{
		for (x = 0; x < col; x++)
		{
			cin >> array[x][y];
		}
	}
	out(0, 0, col, row);
	return 0;
}