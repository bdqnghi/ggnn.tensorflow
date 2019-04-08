
int main()
{
	char str[101],fri[101];
	int i;
	gets(str);

	for(i=0;i<L-1;i++)
	{
		printf("%c",str[i]+str[i+1]);
	}
	printf("%c\n",str[i]+str[0]);
	return 0;
}