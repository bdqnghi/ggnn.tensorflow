void main()
{
	void select(char str[100000]);
	int t;
	char str[100000];
	scanf("%d\n",&t);
	int i;
	for (i=1;i<=t;i++)
	{
		gets(str);
		select(str);
	}
}

void select(char str[100000])
{
	char *pointer[26],*p;
	pointer[0]=&str[0];
	int j=0;
	int k[26]={0};
	p=&str[1];
	while (*p!='\0')
	{
		int m,x=0;
		for (m=0;m<=j;m++)
		{
			if (*p==*pointer[m])
			{
				k[m]=1;
				x=1;
				break;
			}
		}
		if (x==0) pointer[++j]=p;
		p++;
	}
	int l,y=0;
	for (l=0;l<=j;l++)
	{
		if (k[l]==0)
		{
			printf("%c\n",*pointer[l]);
			y=1;
			break;
		}
	}
	if (y==0) printf("no\n");
}
