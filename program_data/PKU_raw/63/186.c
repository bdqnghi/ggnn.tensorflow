// ?????? ???1000010500
// ????


int main()
{
	int x1,y1,x2,y2,i,j,q,a[100][100],b[100][100],c[100][100];
	memset(c,0,sizeof(c));

	cin >> x1 >> y1;                            // ????
	for (i = 0;i < x1;i ++)
		for (j = 0;j < y1;j ++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for (i = 0;i < x2;i ++)
		for (j = 0;j < y2;j ++)
			cin >> b[i][j];
	
	for (i = 0;i < x1;i ++)                     // ??
		for (j = 0;j < y2;j ++)
			for (q = 0;q < y1;q ++)
				c[i][j] +=(a[i][q] * b[q][j]);

	for (i = 0;i < x1;i ++)
	{
		cout << c[i][0];                        // ?????
		for (j = 1;j < y2;j ++)
			cout << " " << c[i][j];
		cout << endl;
	}
	return 0;
}




