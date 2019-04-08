/*????:????
 *??:???
 *??:2010/11/26
 *??:1000010449
 */
int main()
{
	int n, i, j, count, x[20];

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> count;
		if (count == 0)
			cout << 60 << endl;
		else
		{
			x[0] = 0;
			for (j = 0; j < count; j++)
				cin >> x[j];
		
			for (j = 0; j < count; j++)
			{
				if (x[j] + 3 * j > 60)
					break;
			}
			j--;

			if (60 - x[j] - 3 * (j + 1) <= 0)
				cout << x[j] << endl;
			else
				cout << 60 - 3 * (j + 1) << endl;
		}
	}

	return 0;
}