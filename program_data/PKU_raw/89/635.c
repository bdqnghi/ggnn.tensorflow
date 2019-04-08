//????????????
//???2010.12.13
//??????
//???1000012856

int main()
{
	int n, count[10000] = {0};
	cin >> n;
	while(1)
	{
		int i, j, k;
		cin >> i >> j;
		if( i == 0 && j == 0)
			break;
		else
		{
			for(k = 0; k < n; k++)
				if(j == k)
					count[k]++;
		}
	}
	int l, sum = 0;
	for(l = 0; l < n; l++)
	{
		if(count[l] == n - 1)
		{
			cout << l << endl;
			sum++;
		}
	}
	if(sum == 0)
		cout << "NOT FOUND" << endl;

	return 0;
}

