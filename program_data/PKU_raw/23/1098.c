int main()
{
	char s[100][100];
	int i,n;
	i=0;
	while (scanf("%s",*(s+i))!=EOF)
	{i++;}
	n=i;
	for(i=n-1;i>=1;i--)
    {printf("%s ",*(s+i));}
    printf("%s",*s);
}
