/**?????
  *???2010/11/5
  *??????
  *???1000010449
*/
int main()
{
	int a[16], len, count, i, j;
	while (1)
	{
		cin >> a[0];
		if (a[0] == -1)
		{
			break;
		}
		len = 0;
		do
		{
			len++;
			cin >> a[len];
		}while (a[len] != 0);
        count = 0;
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (j == i)
				{
					continue;
				}
				else
				{
					if (a[j] == (2 * a[i]))
						count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
