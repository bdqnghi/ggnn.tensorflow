int main()
{
	int i=0,j=0,n=0;
	char str[100001],s[1001][21];
	gets(str);
	while(str[i]!='\0')
	{
		while(str[i]!=' '&&str[i]!='\0')
		{
			s[n][j]=str[i];
			j++;
			i++;
		}
		s[n][j]='\0';
		n++;
		j=0;
		while(str[i]==' ')
		{
			s[n][j]=str[i];
			i++;
			j++;
		}
		s[n][j]='\0';
		n++;
		j=0;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%s",s[i]);
	}
	return 0;
}
