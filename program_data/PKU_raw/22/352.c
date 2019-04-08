void main(void)
{
	char c[1500];
	int a[300];
	int i, j, k, l, s, t, m;
	gets(c);
	j = 0;
	a[0] = 0;
	for(i = 0;c[i] != '\0';i++)
	{
		
		if(c[i] != ',')
			a[j] = a[j] *10 + c[i] - '0';
		else
		{
			j = j + 1;
			a[j] = 0;
		}
	}
	for(k = 0;k < j;k++)
	{
		for(t = 0;t < j - k;t++)
		{
			if(a[t] < a[t + 1])
			{
				m = a[t];
				a[t] = a[t + 1];
				a[t + 1] = m;
			}
		}
	}
	for(i = 0;i < j;i ++)
	{
		if(a[i] > a[i + 1])
		{
		
			printf("%d",a[i + 1]);
			break;
		}
	}
	if(i == j)
		printf("No");
}