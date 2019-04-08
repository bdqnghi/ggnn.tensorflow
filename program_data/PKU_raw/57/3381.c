int main()
{
	int n,i;
	char s[33];
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(s);
		int l=strlen(s)-1;
		if (s[l]=='g'&&s[l-1]=='n'&&s[l-2]=='i')
		{
			s[l-2]='\0';puts(s);
		}
		else
		{
			if ((s[l]=='y'&&s[l-1]=='l')||(s[l]=='r'&&s[l-1]=='e'))
			{
				s[l-1]='\0';puts(s);
			}
		}
	}
}