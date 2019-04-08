
int result[100000] = {2};

int main()
{
	int N;
	cin >> N;

	if (N == 0)
	{
		cout << 1 << endl;
	}
	else 
	{
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 0; j < 100000; j++)
			{
				result[j] *= 2;
			}

			for (int k = 0; k < 100000; k++)
			{
				if (result[k] >= 10)
				{
					result[k+1] += result[k]/10;
					result[k] %= 10;
				}
			}
		}

		int n = 99999;
		while (result[n] == 0)
		{
			n--;
		}

		for (int l = n; l >= 0; l--)
		{
			cout << result[l]; 
		}
	}

	return 0;
}