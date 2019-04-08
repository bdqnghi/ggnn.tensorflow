int main()
{
	int n,i,l;
	char s[33];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",&s);
		l=strlen(s);
		if(strcmp(&s[l-3],"ing")==0)
		{
			s[l-3]='\0';
		}
		else if(strcmp(&s[l-2],"er")==0)
		{
			s[l-2]='\0';
		}
		else if(strcmp(&s[l-2],"ly")==0)
		{
			s[l-2]='\0';
		}
		printf("%s\n",s);
	}
	return 0;
}
