void main()
{
	char s[101],*p;
	gets(s);
	p=s;
	while(*p!='\0')
	{
		if(*p!=' ')
		{
			printf("%c",*p);
			p++;             //
		}
		if(*p==' ')
		{
			printf(" ");
			do{p++;}while(*p==' ');
		}
	}

}



		
		
	
