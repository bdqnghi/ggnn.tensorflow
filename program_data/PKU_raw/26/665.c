int main()
{
	/*char str[101];
	gets(str);
	int i, isfirst;
	for(i=0; str[i]!=NULL; i++)
	{
		if(str[i] != ' ')
		{
			printf("%c", str[i]);
			isfirst = 1;
		}
		else
		{
			if(isfirst)
			{
				printf(" ");
				isfirst = 0;
			}
		}
	}*/
	char str[101];
	gets(str);
	putchar(str[0]);
	int i;
	for(i=1; str[i]!=NULL; i++)
	{
		if(str[i] != ' ')
			putchar(str[i]);
		else if(str[i] != str[i-1])
			putchar(' ');
	}
	return 0;
}