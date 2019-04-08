int main()
{
	int n;
	cin >> n;
	cin.get();
	char a[10000];
	memset(a,'\0',10000);
	gets(a);
	int q = strlen(a);
	for (int i = 0; i <= q; )
	{
		if (a[i + 80] == '\0')
		{
			puts(a+i);
			break;
		}
		else if(a[i + 79] == ' ')
		{
			a[i + 79] = '\n';
			for (int j = i; j <= i + 79; j++)
				putchar(a[j]);
			i += 80;
		}
		else if(a[i + 80] == ' ')
		{
			a[i + 80] = '\n';
			for (int j = i; j <= i + 80; j++)
				putchar(a[j]);
			i += 81;
		}
		else
		{
			int j = i + 79;
			for(;a[j] != ' ';j--);
			a[j] = '\n';
			for (int l = i; l <= j; l++)
				putchar(a[l]);
			i = j + 1;
		}
	}
}




