int main()
{
	int a[5][5];
	int max[5];
	int i, j, tell, alltell = 0;
	for(i = 0; i < 5; i++)
	{
		max[i] = 0;
		for(j = 0; j < 5; j++)
		{
			cin >> a[i][j];
            max[i] = a[i][max[i]] > a[i][j] ? max[i] : j;
		}
	}
	for(j = 0; j < 5; j++)
	{
		for(tell = 0, i = 0; i < 5; i++)
			if(a[j][max[j]] > a[i][max[j]])
				tell = 1;
		if(tell == 0)
		{
			cout << j + 1 << " " << max[j] + 1 
				<< " " << a[j][max[j]] << endl;
			alltell++;
		}
	}
	if (alltell == 0) cout << "not found" << endl;
	return 0;
}
	