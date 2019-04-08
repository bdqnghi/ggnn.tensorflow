
int main()
{
	int i=0, j=0, n, cnt=0, max=0, a[101][2];
	cin >> n;
	for (int i=0; i<n; i++)
		for (int j=0; j<2; j++)
			cin >> a[i][j];
	for (int i=0; i<n; i++)
	{
		if (a[i][0]<=140 && a[i][0]>=90 && a[i][1]<=90 && a[i][1]>=60 )
			cnt++;
		else
			cnt = 0;
		if (max<cnt)
			max = cnt;	 
	}
	cout << max << endl;
	return 0;
} 