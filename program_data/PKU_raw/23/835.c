void main()
{
	char str[100],*pstr,*x;
	char a[100],*pa;
	int n;
	gets(str);
	n=strlen(str);
	pstr=str+n-1;
	pa=a;
	for(;pstr>=str;pstr--)
	{
		if(*pstr==' ')
		{	
			x=pstr;
			pstr++;
			for(;*pstr!=' '&&*pstr!='\0';pstr++)
			{
				*pa=*pstr;
				pa++;
			}
			*pa=' ';
			pa++;
			pstr=x-1;
		}
	}
	pstr=str;
	for(;*pstr!=' '&&*pstr!='\0';pstr++)
	{
		*pa=*pstr;
		pa++;
	}
	for(pa=a;pa<a+n;pa++)
		printf("%c",*pa);
}