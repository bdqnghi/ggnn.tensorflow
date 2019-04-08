

int main()
{
	char str[101],*p=str,*ps=str;
	gets(str);
	for(;p<str+strlen(str)-1;p++)
	{
		printf("%c",*p+*(p+1));
	}
	printf("%c",*p+*ps);
	return 0;
}

