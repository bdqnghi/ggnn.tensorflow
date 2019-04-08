void main()
{
	char str[30];
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{gets(str);
	m=strlen(str);
	if(str[m-1]=='g')
	str[m-3]='\0';
	else
		str[m-2]='\0';
	printf("%s\n",str);
	}
}
