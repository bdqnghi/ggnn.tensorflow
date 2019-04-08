int main()
{
	int i;
	char s[9999],*s0,*s1,*s2;
	gets(s);
	s0=s;
	s1=(char *)malloc(sizeof(*s));
	s2=s1;
	for(i=0;i<strlen(s)-1;i++)
	{
		*s1=*s0+*(s0+1);
		s1++;
		s0++;
	}
	*s1++=*s+*s0;
	*s1='\0';
	printf("%s",s2);
	return 0;
}