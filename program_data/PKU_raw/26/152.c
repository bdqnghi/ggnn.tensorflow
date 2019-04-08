void main()
{
	char a[101];
	char *p=a;
	gets(a);
	for(p=a;*p!='\0';p++)
	{
		if(*p==' ')
		{
			if(*(p+1)==' ')continue;
			else printf("%c",*p);
		}
		else printf("%c",*p);
	}	
}
	