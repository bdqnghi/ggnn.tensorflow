int main()
{
	char num[5];
	gets(num);
	for(int i=strlen(num)-1;i>=0;i--)
	{
		printf("%c",num[i]);
	}
	getchar();
	getchar();
	return 0;
}
