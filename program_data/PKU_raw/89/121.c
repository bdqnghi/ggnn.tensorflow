
int main()
{
	int n = 0, a = 0, b = 0, i = 0, pos = 0, count[10000], num = 0;
	
	scanf("%d", &n);
	for (i = 0; i < n; i ++)
		count[i] = 0;
	
	while (scanf("%d%d", &a, &b) && (a + b != 0))
		count[b] ++;

	for (i = 0; i < n; i ++)
	{
		if (count[i] == n -1)
		{
			pos = i;
			num ++;
		}
	}

	if (num == 1)    printf("%d\n", pos);
	else    printf("NOT FOUND\n");

	return 0;
}
