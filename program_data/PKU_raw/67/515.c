int main()
{
	int n, x, y[100], total[100][100], effect[100][100], i;
	cin >> n;
	for( i = 0; i < n; i++)
		cin >> total[i][100] >> effect[i][100];
	x = 10000 * effect[0][100] / total[0][100];
	for(i = 0; i < n - 1; i++)
	{
		y[i] = 10000 * effect[i + 1][100] / total[i + 1][100];
		if(y[i] - x > 500) 
		{
			cout << "better" << endl;
			continue;
		}
		if(x - y[i] > 500)
		{
			cout << "worse" << endl;
			continue;
		}
		cout << "same" << endl;
	}
	return 0;
}

