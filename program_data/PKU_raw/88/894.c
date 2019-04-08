
int main()
{
	char a[35];
	gets(a);
	char* end=a+strlen(a);
	for (char *i=a;i<end;i++)
	{
		if (*i>='0' && *i<='9')
		{
			printf("%c",*i);
		}
		else
		{
			while (!(*i>='0' && *i<='9'))
			{
				i++;
			}
			i--;
			printf("\n");
		}
	}
	return 0;
}