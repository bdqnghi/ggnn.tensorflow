void main()
{
	char s[50],w[50];
	char *pin,*pmove,*ps,*pw;
	int flag;
	ps=s;
	pw=w;
	scanf("%s",ps);
	scanf("%s",pw);
	pmove=pw;
	while (*pmove++!='\0')
	{
		if (*pmove==*ps)
		{
			flag=1;
			pin=pmove;
			while (*ps!='\0')
			{
				if (*pmove!=*ps) {flag=0; break;}
				ps++;
				pmove++;
			}
			if (flag)	{printf("%d",pin-pw); break;}
			pmove=pin;
			ps=s;
		}
	}
}