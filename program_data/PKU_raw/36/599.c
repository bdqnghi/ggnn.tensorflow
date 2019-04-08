void ex(char a[], char b[]);
void main(void)
{
	char a[100], b[100];
	int i, j, l;
	scanf("%s%s", a, b);
	ex(a, b);
	if(strlen(a) == strlen(b))
	{
		l = strlen(a);
		i = strcmp(a, b); 
		if(i == 0)
			printf("YES");
		else
			printf("NO");
	}
	else
		printf("NO");
}

void ex(char a[], char b[])
{
	char c;
	int l, i, j;
	l =strlen(a);
	for(i = 0;i < l;i ++)
	{
		for(j = 0;j < l - 1;j ++)
		{
			if(a[j] < a[j + 1])
			{
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
		}
	}
	l =strlen(b);
	for(i = 0;i < l;i ++)
	{
		for(j = 0;j < l - 1;j ++)
		{
			if(b[j] < b[j + 1])
			{
				c = b[j];
				b[j] = b[j + 1];
				b[j + 1] = c;
			}
		}
	}
}