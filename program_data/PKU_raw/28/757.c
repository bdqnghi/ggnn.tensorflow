void main()
{
	int i,num=0,n;
	char s[10000];
	gets(s);
	n=strlen(s);
	for(i=0;i<=n;i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
			num++;
		else if(s[i]==' ')
		{
			if(num==0)
				continue;
			else {printf("%d,",num);
			num=0;}
		}
		else if(s[i]=='\0')
			printf("%d\n",num);
	}
}