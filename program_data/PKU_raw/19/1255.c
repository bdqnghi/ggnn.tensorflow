void main()
{
	int t=0;
	char *p;
	char *a,*b,*c;
	p=(char*)malloc(200*sizeof(char));
	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	gets(p);
	gets(a);
	gets(b);
	c=p;
	while(*p!='\0')
	{
		if(*p!=' ')p=p+1;
		else
		{
			*p='\0';
			p=p+1;
			if(strcmp(c,a)==0)printf("%s ",b);
			else printf("%s ",c);
			c=p;
		}
	}
	do
	{
		if(strcmp(c,a)==0)printf("%s",b);
			else printf("%s",c);
			t=1;
	}while((*p=='\0')&&(t=0));
}