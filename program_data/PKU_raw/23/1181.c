
void main()
{
	char *s,*p,*r;
	s=(char *)malloc(100*sizeof(char));
	gets(s);
	p=s+strlen(s)-1;
	for (;p>=s;p--)
	{
		if (*p==' ')
		{
			r=p+1;
			printf("%s ",r);
			*p='\0';
		}
		if (p==s) printf("%s",p);
	}
}