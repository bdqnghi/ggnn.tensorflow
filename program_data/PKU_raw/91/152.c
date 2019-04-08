void main()
{
    char s[102]={' '},*p;
    gets(s);
	s[strlen(s)]=s[0];
	for(p=s;p<s+strlen(s);p++)
		*p+=*(p+1);
	s[strlen(s)-1]='\0';
	printf("%s",s);
}
