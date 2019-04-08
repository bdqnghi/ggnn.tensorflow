int main()
{
	char c[80],d[80];
	int i,n;
	gets(c);
	gets(d);
	n=0;
	//?????//
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]>=65&&c[i]<=90)
			c[i]=c[i]+'a'-'A';
	}
	for(i=0;i<strlen(d);i++)
	{
		if(d[i]>=65&&d[i]<=90)
			d[i]=d[i]+'a'-'A';
	}
	//??//
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]>d[i])
		{
			n=1;
			break;
		}
		if(c[i]<d[i])
		{
			n=-1;
			break;
		}
	}
	if(n==0)
	{
		if(strlen(c)<strlen(d))
			n=-1;
	}
	if(n==1)
		printf(">");
	else
	{
		if(n==0)
			printf("=");
		else
			printf("<");
	}
	return 0;
}
