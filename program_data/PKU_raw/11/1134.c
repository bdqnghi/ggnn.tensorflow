
int main(void)
{
	int ye, mo, da, i, sum = 0;
	int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	scanf("%d%d%d", &ye, &mo, &da);

	for (i = 1; i < mo; i++)
	{
		sum = sum + mon[i];
	}
	if (((ye % 400 == 0) && mo > 2) || ((ye % 4 == 0) && (ye % 100 != 0)) && mo > 2)
	{
		sum = sum + da + 1;
	}
	else
	{
		sum = sum + da;
	}

	printf("%d", sum);

	return 0;
}
