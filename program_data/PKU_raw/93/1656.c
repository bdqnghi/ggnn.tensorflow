
int main()
{
	int mm[3] = {3, 5, 7};
	int flag[3] = {0};
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < 3; i++)
	{
		if (n % mm[i] == 0)
			flag[i] = 1;
	}
	int space = -1;
	for (i = 0; i < 3; i++)
	{
		if (flag[i] == 1)
		{
			space ++;
			if (space == 0)
				printf("%d", mm[i]);
			else
				printf(" %d", mm[i]);
		}
	}
	if(space == -1)
		printf("n");
	printf("\n");
}