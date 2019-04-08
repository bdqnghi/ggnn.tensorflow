void main(void)
{
	char a[11],b[4],c[15];
	int j, l, max;
	while (scanf("%s%s", a, b) != EOF)
	{
		max = 0;
		j = 0;
		l = strlen(a);
		for(j = 0;j < l;j ++)
		{
			if(a[j] > a[max])
				max = j;
		}
		for(j = 0;j <= max; j ++)
		{
			c[j] = a[j];
		}
		for(j = 1;j <= 3;j ++)
		{
			c[j + max] = b[j - 1];
		}
		for(j = max + 1;j < l;j ++)
		{
			c[j + 3] = a[j];
		}
		c[l + 3] = '\0';
		puts(c);
	}
}