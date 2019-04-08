void main()
{
	char str[11],substr[4],*p,ma;
	int i,m;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		
		p=str;
		ma=*p;
		m=0;

		for(i=0;i<strlen(str);i++,p++)
		{
			if(*p>ma)
			{
				ma=*p;
				m=i;
			}
		}

		p=str;

		for(i=0;i<=m;i++,p++)
			printf("%c",*p);
		printf("%s",substr);
		for(;i<strlen(str);i++,p++)
			printf("%c",*p);
		printf("\n");
	}
	
}

