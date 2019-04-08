void main()
{
	char s[1000];
	int n,m=0,i;
	gets(s);
	n=strlen(s);
         char *p=s;
	for(i=0;i<=n;i++,p++)
	{
		if(*p!=' ')
			m++;
	        if(*p==' '&&m!=0)
		{
			printf("%d,",m);
	                m=0;
		}
		if(*p=='\0')
			printf("%d",m-1);
	}
}
