int main()
{
	char str[300];
	int i;
	char c;
	gets(str);
	for(i=0;(c=str[i])!='\0';i++)
	{
		if((c=str[i])==32)
		{
			if((c=str[i-1])==32)
				continue;
		}
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}