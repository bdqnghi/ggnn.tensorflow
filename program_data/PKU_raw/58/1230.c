void main()
{
	int n,i,*a,*A;
	char *p,c;
	scanf("%d\n",&n);
	a=(int*)malloc(n*sizeof(char));
	A=a;
	for(i=0;i<n;i++)
	{
		p=(char*)malloc(80*sizeof(char));
		gets(p);
		scanf("\n");
		if(*p!='_'&&((*p<'A')||((*p>'Z')&&(*p<'a'))||(*p>'z')))
		{
			*a=0;
			a++;
		}
		else
		{
			p++;
			for(;*p!='\0';p++)
		{
			if(*p!='_'&&((*p<'A')||((*p>'Z')&&(*p<'a'))||(*p>'z'))&&(*p<'0'||*p>'9'))
				break;
		}
		if(*p=='\0')
		{
			*a=1;
			a++;
		}
		else
		{
			*a=0;
			a++;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*A);
		A++;
	}
}

	
