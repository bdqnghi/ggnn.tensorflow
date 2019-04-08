
int main()
{
	char a[200], t[200];
	int k, b;
	long n = 0;
	scanf("%d%s%d", &k, a, &b);
	
	int i, j;
	for(i = 0; i < (int)strlen(a); i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
		{
			n = n * k + (a[i] - '0');
		}
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			n = n * k + (a[i] - 'a' + 10);
		}
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			n = n * k + (a[i] - 'A' + 10);
		}
	}

	i = 0;
	do
	{
		t[i] = n % b + '0';
		if(t[i] > '9')
			t[i] = t[i] - '0' + 'A' - 10;
		n = n / b;
		i++;
	}
	while(n > 0);

	for(j = i - 1; j >= 0; j--)
	{
		printf("%c", t[j]);
	}

	printf("\n");
	return 0;
}
