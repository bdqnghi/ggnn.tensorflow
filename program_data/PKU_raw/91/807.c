void main()
{
	int i;
	char s[105],c[105];
	gets(s);
	for(i=0;s[i+1]!='\0';i++)
	{
		c[i]=s[i]+s[i+1];
	}
	c[i]=s[i]+s[0];
	c[i+1]='\0';
	puts(c);
}
