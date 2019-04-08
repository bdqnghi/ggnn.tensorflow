
int Prime(int a)
{
	int i, j;
	j = 1;
	if (a <= 1)
		return 0;
	else if (a == 2 && a == 3)
		return 1;
	else if (a>3)
	{
		for (i = 2; i <= (a / 2); i++)
		{
			if (a%i == 0)
			{
				j = 0;
				break;
			}
		}
	}
	return j;
}
int main()
{
	int N;
	scanf("%d", &N);
	int a,b=0;
	for (a = 1; a <= N; a++)
	{
		if (Prime(a) == 1 && Prime(a - 2) == 1)
		{
			printf("%d %d\n", a-2,a);
			b++;
		}
	}
	if (b == 0)
		printf("empty\n");

}