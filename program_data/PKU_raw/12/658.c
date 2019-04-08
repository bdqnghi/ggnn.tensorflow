int main()
{
	int a[16], j, k, sum;
	while(true)
	{
		cin >> a[0];
		if(a[0] != -1)
		{
			int i;
			for(i = 1 ; ; i++)
			{
				cin >> a[i];
				if(a[i] == 0)
					break;
			}
			sum = 0;
			for (j = 0; j < i; j++)
			{
				for (k = j + 1; k < i ; k++)
							if (a[j] == 2 * a[k] || a[k] == a[j] * 2)
								sum = sum + 1;
			}
							cout << sum << endl;
		}
		else
			break;
	}
	return 0;
}
