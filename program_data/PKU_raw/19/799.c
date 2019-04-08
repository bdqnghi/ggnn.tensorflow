
void main()
{
	char *s,*a,*b,*p,*c,n,*end;
	s=(char *)malloc(101*sizeof(char));
	a=(char *)malloc(101*sizeof(char));
	b=(char *)malloc(101*sizeof(char));
	c=(char *)malloc(101*sizeof(char));
	gets(s);
	gets(a);
	gets(b);
	p=s;
	end=s+strlen(s);
	for (;;)
	{
		sscanf(p,"%s",c);
		if (strcmp(c,a)==0) printf("%s",b);
		else printf("%s",c);
		p=p+strlen(c)+1;
		if (p>=end) break;
		printf("%c",' ');
	}
}
