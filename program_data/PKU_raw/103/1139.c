
main()
{
	char s[1001],c;
	int i,n=1;
	gets(s);
	if(s[0]>'Z') s[0]-='a'-'A';
	c=s[0];
	for(i=1;s[i];i++)
	{
		if(s[i]>'Z') s[i]-='a'-'A';
		if(s[i]==c) n++;
		else
		{
			printf("(%c,%d)",c,n);
			c=s[i];
			n=1;
		}
	}
	printf("(%c,%d)",c,n);
}