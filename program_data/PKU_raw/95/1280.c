int main()
{
	int i,n,m;
	char c[100],d[100];
	gets(c);
	gets(d);
	m=strlen(c);
	n=strlen(d);
	for(i=0;i<m;i++)
	{
		if((c[i]>='A')&&(c[i]<='Z'))
		{
			c[i]=c[i]+32;
		}
	}
	for(i=0;i<n;i++)
	{
		if((d[i]>='A')&&(d[i]<='Z'))
		{
			d[i]=d[i]+32;
		}
	}
	if(strcmp(c,d)>0) printf(">");
	else if(strcmp(c,d)<0) printf("<");
	else printf("=");
	return 0;
}
