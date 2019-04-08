void main()
{
	char s[102],s1[102],c;
	int i,len;
	gets(s);
	len=strlen(s);
	for(i=1;(c=s[i])!='\0';i++)
		s1[i]=s[i-1]+s[i];
	for(i=1;i<len;i++)
		printf("%c",s1[i]);
	printf("%c\n",s[0]+s[len-1]);
}
