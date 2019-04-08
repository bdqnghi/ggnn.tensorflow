void main()
{
	char s[20]="0",d[20],k;
	int a,b,c,i=0,e;
	long n=0;
	scanf("%d ",&a);
	while((s[i]=getchar())!=' ')
	{
		i++;
	}
	scanf("%d",&b);
	c=strlen(s)-1;
    for(i=c-1;i>=0;i--)
	{
		if (s[i]>=65&&s[i]<=90)
			s[i]=s[i]-55;
		else if (s[i]>=48&&s[i]<=57)
			s[i]=s[i]-48;
		else if (s[i]>=97&&s[i]<=122)
			s[i]=s[i]-87;
		n=n+s[i]*pow(a,c-1-i);
	}
	i=0;
	e=n;
	do
	{
		d[i]=e%b;
		if (d[i]>=10)
			d[i]=d[i]+55;
		else d[i]=d[i]+48;
		i++;
		e=e/b;
	}while (e!=0);
	for(i=i-1;i>=0;i--)
	{
		if (i!=0)
		    printf("%c",d[i]);
		else printf("%c\n",d[i]);
	}

}