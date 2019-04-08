int main()
{
	int a[16], i, j, k, sum;
	do
	{
		sum = 0;
		i = 0;
		cin >> a[0];
		if (a[0] != -1)
		{
			do
			{
				i++;
				cin >> a[i];
			} while (a[i] != 0);
			for (j = 0; j < i; j++)
			{
				for (k = 0; k < i; k++)
				{
					if (a[k] == 2 * a[j])
						sum += 1;
				}
			}
			cout << sum << endl;
		}
		else 
			break;
	} while (1);
	return 0;
}
