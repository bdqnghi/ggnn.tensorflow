void main()
{
	int n;
	scanf("%d\n",&n);
	char str[100][200];
	int i;
	for (i=0;i<n;i++)
		gets(str[i]);
	for (i=0;i<n;i++)
	{
		char *p;
		int k=1;
		p=&str[i][0];
		if (('A'<=*p&&*p<='Z')||('a'<=*p&&*p<='z')||*p=='_')
		{
			for (p=p+1;*p!='\0'&&k==1;p++)
			{
				if (('A'<=*p&&*p<='Z')||('a'<=*p&&*p<='z')||*p=='_'||('0'<=*p&&*p<='9'))
					k=1;
				else k=0;
			}
		}
		else k=0;
		printf("%d\n",k);
	}
}