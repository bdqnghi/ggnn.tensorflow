//???????????//
//??????//
//???2010.10.27//

int main()
{
	int n = 0;
	int a[100002] = {0};             //????a[100002]//
	int k = 0;
	int i = 0;
	int j = 0;
	int count = 0;                   //?????count??????????//
	int f = 0;                       //??f?????????//

	cin >> n;
	for (i = 1; i <= n; i ++)
		cin >> a[i];
	cin >> k;

	for (i = 1; i <= n; i ++)
	{
		if (a[i] == k)
		{
			for(j = i; j <= n; j ++)  //??????????//
				a[j] = a[j + 1];
			count ++;                 //????1//
			i --;                     //????a[i]//
		}
	}

	for (i = 1; i <= n - count; i ++)
	{
		if (f != 0)
			cout << " ";
		else
			f = 1;
		cout << a[i];
	}

	return 0;
}

