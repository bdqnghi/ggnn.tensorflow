
int main ()
{
	int y = 0, m = 0, d = 0;
    scanf ("%d %d %d", &y, &m, &d);
	int days = 0;
	int i;
	if (y % 4 == 0)
	{
		int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for (i = 1; i < m; i++)
		{
			days = month[i] + days;
		}
		days = d + days;
	}
	else
	{
		int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		for (i = 1; i < m; i++)
		{
			days = month[i] + days;
		}
		days = d + days;
	}
	printf ("%d\n", days);
	return 0;
}