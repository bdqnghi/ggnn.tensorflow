int main()
{
	char s[30];
	gets(s);
	char *a;
	for(a=s;*a!='\0';a++)
	{
		if(*a>='0'&&*a<='9')
		{
			printf("%c",*a);
		}
		else
		{
			if(a==s)
			{
				continue;
			}
			else
			{
				if(*(a-1)>='0'&&*(a-1)<='9')
				{
					printf("\n");
				}
			}
		}
	}
	printf("\n");
	return 0;
}