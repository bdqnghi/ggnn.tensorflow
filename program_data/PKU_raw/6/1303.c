int main()
{
int t,m,n,count;
int a[100][100];
int (*p)[100] = a;
cin >> t;
for(int temp = 0 ; temp < t ; temp++)//?n??? 
{
	count = 0;//???? 
	cin >> m >> n;
	for(int i = 0 ; i < m; i++)
		for(int j = 0 ; j < n; j++)
			//cin >> a[i][j];//???? 
			cin >> *(*(p+i)+j);
	for(int i = 1 ; i < m-1; i++)//????????? 
	{
		count += a[i][0];
		count += a[i][n-1];
	}
	for(int j = 0 ; j < n; j++)//?????????
	{
		count += a[0][j];
		count += a[m-1][j];	
	}
	cout << count << endl;//????
}
return 0;
}
