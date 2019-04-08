int main()
{
	char a[200]={0};
	gets(a);
	printf("%c",a[0]);
	int i;
	for(i=1;i<strlen(a);i++)
	{
		if ( a[i] == ' ' && a[i-1] != ' ')
		{
			printf(" ");
		}
		else if (a[i]!=' ')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}

