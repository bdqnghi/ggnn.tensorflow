/**?????????
  *???2010/11/6
  *??????
  *???1000010449
*/
int main()
{
	int n, i, j, k = 0, tem, a[100];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> tem;
		if (tem % 2 != 0)
			a[k++] = tem;
	}
	for (i = 0; i < k - 1; i++)
		for (j = 0; j < k - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
			}
		}
	cout << a[0];
	for (i = 1; i < k; i++)
		cout << "," << a[i];
	return 0;
}

	
