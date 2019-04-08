void main()
{
	struct
	{
		char c;
		int x;
	}l[26],s[26];
	int i,j;
	for(i=0,j=65;i<26;i++,j++)
	{
		l[i].c=j;
		s[i].c=j+32;
		l[i].x=0;
		s[i].x=0;
	}
	char str[300];
	gets(str);
	int n;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			if(str[i]==l[j].c)
			{
				l[j].x++;
				continue;
			}
			if(str[i]==s[j].c)
				s[j].x++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(l[i].x>0)
			printf("%c=%d\n",l[i].c,l[i].x);
	}
	for(i=0;i<26;i++)
	{
		if(s[i].x>0)
			printf("%c=%d\n",s[i].c,s[i].x);
	}
	for(i=0;i<26;i++)
	{
		if(l[i].x==0&&s[i].x==0)
			continue;
		else
			goto loop;
	}
	printf("No");
loop:if(1);
}
