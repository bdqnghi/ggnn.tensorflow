
int N, Sum = 0;

int main()
{
	int i, f, x;
	scanf ("%d", &N);
	for (i = 1; i <= N; i ++)
	{
		if (i % 7 == 0) continue;
		x = i; f = 1;
		while (x > 0 && f)
		{
			if (x % 10 == 7) f = 0;
			x /= 10;
		}
		if (!f) continue;
		Sum += i * i;
	}
	printf ("%d\n", Sum);

	return 0;
}

