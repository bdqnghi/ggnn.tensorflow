int main()
{
	char s[350];
	int a[26];
	int b[26];
	int l,i,judge=0;
	gets(s);
	l=strlen(s)-1;
	for(i=0;i<=25;i++)
	{
		a[i]=b[i]=0;
	}
	for(i=0;i<=l;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			a[s[i]-65]++;
		}
		else if(s[i]>=97&&s[i]<=122)
		{
			b[s[i]-97]++;
		}
	}
	for(i=0;i<=25;i++)
	{
		if(a[i]!=0||b[i]!=0)judge=1;
	}
	if(judge==0)printf("No");
	else
	{
		for(i=0;i<=25;i++)
		{
			if(a[i])printf("%c=%d\n",65+i,a[i]);
		}
		for(i=0;i<=25;i++)
		{
			if(b[i])printf("%c=%d\n",97+i,b[i]);
		}
	}
	return 0;
}