int main()
{
	char s[101];
	int n,i,j;
	while(1)
	{
		if(scanf("%s",s)==EOF) return 0;
		puts(s);
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='(') s[i]='$';
			else
			{
				if(s[i]==')') s[i]='?';
				else s[i]=' ';
			}
		}
		for(i=0;i<n;i++)
		{
			if(s[i]=='?')
			{
				for(j=i;j>=0;j--)
				{
					if(s[j]=='$')
					{
						s[j]=' ';
						s[i]=' ';
						break;
					}
				}
			}
		}
		while(s[n-1]==' ')
		{
			s[n-1]='\0';
			n--;
		}
		while(s[0]==' ')
		{
			for(i=0;i<n;i++)
			{
				s[i]=s[i+1];
			}
		}
		puts(s);
	}
	return 0;
}

