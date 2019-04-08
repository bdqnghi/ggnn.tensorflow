void f(char s[])
{
	int i,j,k,l;
	int n=strlen(s);
	for(i=0;i<n;i++)
	{
		 if(s[i]!='('&&s[i]!=')')
			s[i]=' ';
	}
    for(i=0;i<n;i++)
	{
		if(s[i]==')')
		{
			l=0;
			for(j=i-1;j>=0;j--)
			{
				if(s[j]=='(')
				{
					s[j]=' ';
					s[i]=' ';
					l=1;
					break;
				}
			}
			if(l==0)
				s[i]='?';
		}
	}
    for(i=0;i<n;i++)
		if(s[i]!=' '&&s[i]!='?')
			s[i]='$';
}
int  main()
{
	int n,i;
	scanf("%d",&n);
	char s[10000];
	gets(s);
    for(i=0;i<n;i++)
	{
		gets(s);
		puts(s);
        f(s);
		puts(s);
	}
	return 0;
}