int main()
{
	//a,b????????,c???,x1,y1,x2,y2??a,b????????,i,j,k?????
	int a[101][101], b[101][101], c[101][101], x1, y1, x2, y2, i, j, k;
	cin >> x1 >> y1;
	for (i = 1; i <= x1; i++) //????a
		for (j = 1; j <= y1; j++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for (i = 1; i <= x2; i++) //????b
		for (j = 1; j <= y2; j++)
			cin >> b[i][j];
	for (i = 1; i <= x1; i++)
		for (j = 1; j <= y2; j++)
		{	
			c[i][j] = 0; //??c??????
			for (k = 1; k <= y1; k++)
				c[i][j] = a[i][k] * b[k][j] + c[i][j];
		}
	for (i = 1; i <= x1; i++)
		for (j = 1; j <= y2; j++)
			if (j != y2)
				cout << c[i][j] << " ";
			else
				cout << c[i][j] << endl;
	return 0;
}