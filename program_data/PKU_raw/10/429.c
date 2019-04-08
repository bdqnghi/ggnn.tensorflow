
int a[30];
int b[30];

int main()	{
	int n;
	cin >> n;
	int i, j;
	for(i = 0; i < n; ++i)	{
		cin >> a[i];
		b[i] = 0;
	}

	b[0] = 1;
	int tmp;
	for(i = 1; i < n; ++i)	{
		tmp = 0;
		for(j = 0; j < i; ++j)	{
			if(a[j] >= a[i] && b[j] > tmp)	{
				tmp = b[j];
			}
		}
		b[i] = tmp+1;
	}

	tmp = -1;
	for(i = 0; i < n; ++i)	{
		if(b[i] > tmp)	{
			tmp = b[i];
		}
	}
	cout << tmp << endl;
	return 0;
}
