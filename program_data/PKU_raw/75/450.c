int a[2][1001];
int main()
{
	int flag[1001] = {0}, i, j, max, l;
	char m;
	for(i = 0; ; i++)
	{
		cin >> a[0][i] ;
		m = cin.get();
		if(m != ',')
			break;
	}
	for(i = 0; ; i++)
	{
		cin >> a[1][i] ;
		m = cin.get();
		if(m != ',')
			break;
	}
	l = i;
	for(i = 1; i < 1001; i++)
		for(j = 0; j <= l; j ++)
		{
			if((a[0][j] <= i) && (i < a[1][j]))
				flag[i]++;
		}
	max = flag[1];
	for(i = 2; i < 1001; i++)
	{
		if(max < flag[i])
		{
			max = flag[i];
		}
	}
	cout << l + 1 << " " << max;
	return 0;
}
