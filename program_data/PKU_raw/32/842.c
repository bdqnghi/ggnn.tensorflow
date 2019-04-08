int main()
{
	char numa[201],  numb[201];
	int a[201], b[201], result[201];
	int n, i, j, k, la, lb;
	cin >> n;
	for (; n > 0; n--)
	{
		k = 0;
		cin.ignore();
		cin.getline(numa, 201);
		cin.getline(numb, 201);	
		la = strlen(numa);
		lb = strlen(numb);
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(result, 0, sizeof(result));
		for(i = 0; i < la; i ++)
		{
			a[i] = numa[i] - '0';
		}
		for(j = 0; j < lb; j++)
		{
			b[j] = numb[j] - '0';
		}
		for(i = la - 1, j = lb - 1; i >= 0; i--, j--)
		{
			if(b[j] > a[i])
			{
				b[j - 1]++;
				result[i] = 10 + a[i] - b[j];
			}
			else
				result[i] = a[i] - b[j];
		}
		while (result[k] == 0)
			k++;
		for(i = k; i < la; i++)
			cout << result[i];
		cout << endl;
	}
	return 0;
}
