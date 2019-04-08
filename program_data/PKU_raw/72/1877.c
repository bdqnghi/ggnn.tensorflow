

int a[100][100];

int main()
{
	int m, n;
	int i, j;
	int lenth[150];
	int width[150];
	int count = 0;

	cin >> m >> n;

	memset(a, 0, sizeof(a));

	for(i = 1; i <= m; i ++)
	for(j = 1; j <= n; j ++)
		cin >> a[i][j];

	for(i = 1; i <= m; i ++)
	for(j = 1; j <= n; j ++)
	{
		int tag = 1;

		if(a[i][j] < a[i + 1][j])	tag = 0;
		if(a[i][j] < a[i - 1][j])	tag = 0;
		if(a[i][j] < a[i][j + 1])	tag = 0;
		if(a[i][j] < a[i][j - 1])	tag = 0;

		if(tag == 1)
		{
			lenth[count] = i;
			width[count] = j;
			count ++;
		}
	}

	for(i = 0; i < count; i ++)
		cout << lenth[i] - 1 << ' ' << width[i] - 1 << endl;

	
}