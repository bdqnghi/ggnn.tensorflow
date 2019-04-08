int main()
{
	char c[81],b[81];
	gets(c);
	gets(b);
	int len1,len2,i=0,t=0;
	len1=strlen(c);
	len2=strlen(b);
    for(i=0;i<len1;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
			c[i]=c[i]+32;
	}
	for(i=0;i<len2;i++)
	{
		if(b[i]>='A'&&b[i]<='Z')
			b[i]=b[i]+32;
	}
	t=strcmp(c,b);
	if(t==0)
		printf("=\n");
	else if (t==-1)
		printf("<\n");
		else if(t==1)
		printf(">\n");
	return 0;


}