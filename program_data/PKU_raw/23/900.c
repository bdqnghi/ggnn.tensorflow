void main()
{
	char s[50][200];
	char str[200];
	int n=0,i=0,j=0,t;
	gets(str);
	t=strlen(str);
	while(n<=t)
	{
		if(str[n]!=' ')
		{
			s[i][j]=str[n];
			j++;
		}
		else 
		{
			s[i][j]='\0';
			i++;
			j=0;
		}
		n++;
	}
	for(;i>0;i--)
		printf("%s ",s[i]);
	printf("%s",s[0]);
}