void main()
{
	int n,len,i;
	char str[30],*p,e[20];
	scanf("%d",&n);
	gets(e);
	for(i=1;i<=n;i++)
	{
		gets(str);
		len=strlen(str);
		p=str+len-1;
		if(*p=='y'&&*(p-1)=='l')
			*(p-1)='\0';
		if(*p=='g'&&*(p-1)=='n'&&*(p-2)=='i')
			*(p-2)='\0';
		if(*p=='r'&&*(p-1)=='e')
			*(p-1)='\0';
		printf("%s\n",str);
	}
}
