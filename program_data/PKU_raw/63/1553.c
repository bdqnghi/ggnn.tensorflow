/*
???????
?????? 1200012921
???2012.11.8
*/

int main()
{
	int x1, y1, x2, y2, a[101][101], b[101][101], c[101][101] = {0}, i, j, t;
	cin >> x1 >> y1;
	for (i = 1; i <= x1; i++)        //??a??
		for (j = 1; j <= y1; j++)
		{
			cin >> a[i][j];
		}
	cin >> x2 >> y2;
	for (i = 1; i <= x2; i++)        //??b??
		for (j = 1; j <= y2; j++)
		{
			cin >> b[i][j];
		}
	for (i = 1; i <= x1; i++)        //???????
		for (j = 1; j <= y2; j++)
			for (t = 1; t <= y1; t++)
			{
				c[i][j] = c[i][j] + a[i][t] * b[t][j];
			}
	for (i = 1; i <= x1; i++)       //????
		for (j = 1; j <= y2; j++)
		{
			if (j != y2)            //????????????????
				cout << c[i][j] << " ";
			else
				cout << c[i][j] << endl;
		}
	return 0;
}