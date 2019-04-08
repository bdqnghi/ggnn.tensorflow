char c[30];
void main()
{
	char *p;
	p=c;
	gets(c);
    while(*p!='\0')
	{
		while(*p<'0'||*p>'9')
		{p+=1;if(*p=='\0')break;}
		printf("%c",*p);
		p+=1;
		if(*p<'0'||*p>'9')printf("\n");
	}
}
