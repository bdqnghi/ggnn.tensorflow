
int main()
{
	int num[17], n, count = 1, result = 0;
	while ((cin >> n) && (n != -1))
	{
		if (n)
		{
			num[count] = n;
			count++;
		}
		else
		{
			for (int i = 1; i < count; i++)
			{
				for (int j = 1; j < count; j++)
				{
					if (num[i] == 2 * num[j])
						result++;
				}
			}
			cout << result << endl;
			result = 0;
			count = 1;
		}
	}

	return 0;
}