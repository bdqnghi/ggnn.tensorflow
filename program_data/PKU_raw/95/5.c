int main()
{
	char s[80],t[80];
	gets(s);
	gets(t);
	int m,n,i;
	m=strlen(s);
	n=strlen(t);
	for(i=0;i<m;i++)
	{
		if(s[i]>'A'&&s[i]<'Z')
		{
			s[i]=s[i]-'A'+'a';
		}
	}
	for(i=0;i<n;i++)
	{
		if(t[i]>'A'&&t[i]<'Z')
		{
			t[i]=t[i]-'A'+'a';
		}
	}
	int p;
	p=strcmp(s,t);
	if(p>0)
	{
		printf(">");
	}
	else if(p<0)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}
	return 0;
}