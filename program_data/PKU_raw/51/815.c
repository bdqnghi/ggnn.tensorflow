int main()
{
	int n;
	char moto[510];
	char (*a)[7];
	scanf("%d", &n);
	scanf("%s", moto);
	int len;
	len = strlen(moto);
	int i, j;


	a = (char(*)[7])malloc(sizeof(char(*)[7])*(len - n + 1));
	int t[500];
	for (i = 0; i < 500; i++)
		t[i] = 1;


	for (i = 0; i + n <= len; i++)
	{
		for (j = 0; j < n; j++)
		{
			*(*(a + i) + j) = *(moto + i + j);
		}
		*(*(a + i) + n) = '\0';
	}

	len = len - n + 1;
	int max = 1;
	char zero[7] = { '0' };
	for (i = 1; i < len; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (strcmp(*(a + j), *(a + i)) == 0)
			{
				*(t + j) += 1;
				strcpy(*(a + i), zero);
				break;
			}
		}
	}

	for (j = 0; j<len; j++){
		if (*(t + j)>max)
			max = *(t + j);
	}
	if (max > 1)
	{
		printf("%d\n", max);
		for (i = 0; i < len; i++)
		{
			if (*(t + i) == max)
				printf("%s\n", *(a + i));
		}
	}
	else
		printf("NO");
}