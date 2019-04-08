int main()
{
	char c[80],d[80];
	int n,i,m,t,l;
	gets(c);
	gets(d);
	m=strlen(c);
	l=strlen(d);
    for(i=0;i<=m-1;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
			c[i]=c[i]+32;
	}
	for(i=0;i<=l-1;i++)
	{
		if(d[i]>='A'&&d[i]<='Z')
			d[i]=d[i]+32;
	}
	t=strcmp(c,d);
	if(t<0)
		printf("<");
	if(t==0)
		printf("=");
	if(t>0)
		printf(">");
	
	return 0;
}