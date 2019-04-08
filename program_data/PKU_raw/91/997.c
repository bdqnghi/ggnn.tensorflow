void main()
{
	char s[101],s1[101]="\0";
	char *p=s,*pp=s1;
	gets(s);
	for(;*p!='\0';p++,pp++)
	{
		if(*(p+1)!='\0') *pp=*p+*(p+1);
		else *pp=*p+s[0];
	}
	puts(s1);
}