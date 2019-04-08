main()
{
	char a[10000];
	int i,x=0;
	gets(a);
	for(i=0;i<20000;i++)
	{
		if(a[i]!=' '&&a[i]!='\0') x=x+1;
		if(a[i]==' ')
		{
			if(x!=0) printf("%d,",x);
			x=0;
		}
		if(a[i]=='\0')
		{
			if(x!=0) printf("%d",x);
			break;
		}
	}
}