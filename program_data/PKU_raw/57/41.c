
main()
{
	int n,i,len;
	char str[50][100],*p;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(str[i]);
	}
	for(i=1;i<=n;i++)
	{
		len=strlen(str[i]);
		p=str[i]+len-1;
		if(*p=='r') str[i][len-2]='\0';
		else if(*p=='y') str[i][len-2]='\0';
		else if(*p=='g') str[i][len-3]='\0';
		puts(str[i]);
	}
}