int main()
{
	char s[3000];
	gets(s);
	int sum=1,i;
	for(i=1;i<=strlen(s);i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
		{
			sum=sum+1;
		}
		if(s[i]==' '&&s[i-1]!=' ')
		{
			printf("%d,",sum);
			sum=0;
		}
		if(s[i]=='\0'&&s[i-1]!=' ')
		{
			printf("%d",sum);
		}
	}
	return 0;

}