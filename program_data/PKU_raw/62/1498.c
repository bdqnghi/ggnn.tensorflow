void main()
{
	char *p,str[1000];
	p=str;
	gets(p);
	for(;*p!='\0';p++)
	{
		if(*p!=' ')
			printf("%c",*p);
		else if((*p==' ')&&(*(p+1)!=' '))
			printf("%c",*p);
	}
}