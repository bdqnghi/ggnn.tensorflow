//********************************
//* ??????2?N??         *
//* ??????                 *
//* ???2010-12-16             *
//* ?????2?N??           *
//********************************



void product(int res[200], int N)
{
	int i, j;

	for(i = 1; i <= N; i++)
	{
		for(j = 0; j < 199; j++)
		{
			res[j] = res[j] * 2;
		}
		for(j = 0; j < 199; j++)
			if(res[j] >= 10)
			{
				res[j + 1] += res[j] / 10;
				res[j] = res[j] % 10;
			}
		
	}
	for(i = 199; i >= 0; i--)
		if(res[i] != 0)
		{
			for(j = i; j >= 0; j--)
			{
				cout << res[j];
			}
			break;
		}
	return;
}

int main()
{
	int res[200] = {1};
	int N;

	for(int i = 1; i < 200; i++)
		res[i] = 0;
	cin >> N;

	if(N == 0)
		cout << '1' << endl;
	else product(res, N);

	return 0;
}
	
