int reverse(int number)
{
	int result = 0, left = number, posOrNot = 1;
	if (number < 0)
	{
		posOrNot = 0;
		left = abs(number);
	}

	while (left > 0)
	{
		result = result * 10 + left % 10;
		left = left / 10;
	}

	if (posOrNot == 0)
	{
		result = -result;
	}

	return result;
}

int main()
{
	int i = 0;
	int number = 0;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &number);
		printf("%d\n", reverse(number));
	}
	return 0;
}
