int main()
{
	int row, col, u, v, w, x, y;
	cin >> row >> col;
	int a = 0, b;
	int c = 1, d;
	int num[150][150] = {0};
	for (u = 0; u <= row - 1; u++)
	{
		for (v = 0; v <= col - 1; v++)
		{
			scanf("%d", &num[u][v]);
		}
	}
	b = col - 1;
	d = row - 1;
	for (u = 0; u <= (row - 1) / 2; u++)
	{
			if (u>b) break;
		    for (v = u; v <= b; v++)
			{
			    cout << num[u][v] << endl;
			}
		    for (w = u + 1; w <= d; w++)
			{
			    cout << num[w][b] << endl;
			}
		    for (x = b - 1; x >= u; x--)
			{
				if (u < d)
			    cout << num[d][x] << endl;
			}
		    for (y = d - 1; y >= u + 1; y--)
			{
				if (u < b)
			    cout << num[y][u] << endl;
			}
			b--;
			d--;
	}
	return 0;
}



/*


a=0;b=m-1;c=0;d=n-1;
while (a<=b && c<=d)
{
print(..);
a++;b--;c++;d--;
}

*/