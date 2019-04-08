
void main()
{


	char *s,*a,*b,*p,*end;
	s=(char *)malloc(100*sizeof(char));
	a=(char *)malloc(100*sizeof(char));
	b=(char *)malloc(100*sizeof(char));
	p=(char *)malloc(100*sizeof(char));
	gets(s);
	gets(a);
	gets(b);
	end=s+strlen(s);
	for (;;)
	{
		sscanf(s,"%s",p);
		if (strcmp(p,a)==0) printf("%s",b);
		else printf("%s",p);
		s=s+strlen(p);
		if (s>=end) break;
		s++;
		printf(" ");
	}
}
