int main()
{
	int i,j,len;
	char a[101],*pa;
	gets(a);
	pa=&a[0];
	len=strlen(a);
	i=0;
	for(i=0;i<len-1;i++)
	{
		printf("%c",*(pa+i)+*(pa+i+1));
	}
	printf("%c",*(pa)+*(pa+len-1));
	return 0;
}
