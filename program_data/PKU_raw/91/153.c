void main()
{
    char s[102]={' '},*p;
    gets(s);
	p=s;
	*(p+strlen(s))=*p;
	for(p=s;p<s+strlen(s);p++)
		*p+=*(p+1);
	*(p-1)='\0';
	printf("%s",s);
}
