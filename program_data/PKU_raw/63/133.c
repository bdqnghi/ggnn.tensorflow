int main()
{
	int x1 ,y1, x2, y2, a[101][101], b[101][101], c[101][101], i, j;
	memset(c, 0, sizeof(c));
	cin >> x1 >> y1;
	for(i = 0; i < x1; i++)
		for(j = 0; j < y1; j++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for(i =0; i < x2; i++)
		for(j = 0; j < y2; j++)
			cin >> b[i][j];
	for(i = 0; i < x1; i++)
		for(j = 0; j < y2; j++)
			for(int l = 0; l < y1; l++)
				c[i][j] = c[i][j] + a[i][l] * b[l][j];
	for(i = 0; i < x1; i++)
	{
		cout << c[i][0];
		for(j = 1; j < y2; j++)
			cout << " " << c[i][j];
		cout << endl;
	}
	return 0;
}

				

				
			
