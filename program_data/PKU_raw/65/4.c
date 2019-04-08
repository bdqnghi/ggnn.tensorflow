int main()
{
	int n, a = 0, b = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		if (x == y)
			continue;
		else
		{
			if (x == 0)
			{
				if (y == 1)
					a++;
				else
					b++;
			}
			else if (x == 1)
			{
				if (y == 2)
					a++;
				else
					b++;
			}
			else
			{
				if (y == 0)
					a++;
				else
					b++;
			}
		}
	}
	if (a == b)
		printf("Tie");
	else if (a > b)
		printf("A");
	else
		printf("B");
	return 0;
}

