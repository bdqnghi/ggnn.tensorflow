main()
{
	int i,j=0,n,k=0,b[100];
	char s[100];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			b[j]=i;
			j++;
		}
	}
	b[j]=n;
	b[-1]=0;
	for(k=0;k<j;k++)
	{
		for(i=b[j-1-k]+1;i<b[j-k];i++)
		{
			printf("%c",s[i]);
		}
		printf(" ");
	}
	for(i=0;i<b[0];i++)
		printf("%c",s[i]);
}
