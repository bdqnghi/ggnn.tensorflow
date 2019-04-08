int len;
int checkbegin(char a[],int i)
{
	int j;
	for(j=i;j<len;++j)
		if(a[j]!=' ')
			return(j);
}
int checkend(char a[],int i)
{
	int j;
	for(j=i+1;j<=len;++j)
		if(a[j]==' '||a[j]=='\0')
			return(j);
}
main()
{
	char a[1000];
	int i=0,b;
	gets(a);
	len=strlen(a);
	b=checkend(a,checkbegin(a,i))-checkbegin(a,i);
	printf("%d",b);
	i=checkend(a,checkbegin(a,i))+1;
	while(i<=len)
	{
		b=checkend(a,checkbegin(a,i))-checkbegin(a,i);
		printf(",%d",b);
		i=checkend(a,checkbegin(a,i))+1;
	}
}