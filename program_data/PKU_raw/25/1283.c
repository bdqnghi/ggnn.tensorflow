//********************************
//*??2?N??                 **
//*????? 1300012848        **
//*???2013.11.16             **
//********************************
int main()
{
	const int MAX_LEN = 200;
	int n, i, j, k = MAX_LEN , jinwei[MAX_LEN + 1], flag[MAX_LEN + 1] = {0};
	int a[MAX_LEN + 1];
	memset(jinwei,0,sizeof(jinwei));
	memset(a,0,sizeof(a));
	memset(flag,0,sizeof(flag));
	cin >> n;
	if (n == 0)
		cout << "1" << endl;
	else
	{
		a[0] = 1;
		for (i = 1; i <= n; i++)
		{	
			for (j = 0; j < MAX_LEN; j++)
				a[j] = a[j] * 2;
			for (j = 0; j < MAX_LEN; j++)
				if(a[j] >= 10)
				{
					a[j] = a[j] % 10;
					a[j+1] ++;
				}
		}
	while (a[k] == 0)
		k--;
	for(; k >= 0; k--)
	cout << a[k];
	}
	return 0;
}