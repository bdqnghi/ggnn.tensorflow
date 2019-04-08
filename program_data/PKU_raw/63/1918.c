//********************************
//*?????? 1300012733 **
//*???2013.11.9  **
//********************************
int main()
{
	int x1,y1,x2,y2;
	int a[109][109],b[109][109],c[109][109]={0};
	cin >> x1 >> y1;
	for(int i = 1; i <= x1; i++)
		for( int j = 1; j <= y1; j++)
			cin >> a[i][j];
	cin >> x2 >> y2;
	for(int i = 1; i <= x2; i++)
		for( int j = 1; j <= y2; j++)
			cin >> b[i][j];
	for(int i = 1; i <= x1; i++)
		for( int j = 1; j <= y2; j++)
		{
			for( int v = 1; v <= y1 ; v++ )
				c[i][j] = c[i][j] + a[i][v] * b[v][j];
		}
	for(int i = 1; i <= x1; i++)
	{
		cout << c[i][1];
		for( int j = 2; j <= y2; j++)
		cout << ' ' << c[i][j];
		cout<< endl;
	}
	return 0;
}