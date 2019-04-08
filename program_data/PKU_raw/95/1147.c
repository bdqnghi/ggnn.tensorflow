int main()
{
	int i=0;
	char s[1000],t[1000],c;
	gets(s);
	gets(t);
	while(s[i]!='\0') 
	{
	    if(s[i]>=65&&s[i]<=90) 
		{
			c=s[i];
			s[i]=c+'a'-'A';
		}
		i++;
	}
	i=0;
	while(t[i]!='\0') 
	{
	    if(t[i]>=65&&t[i]<=90) 
		{
			c=t[i];
			t[i]=c+'a'-'A';
		}
		i++;
	}
	if(strcmp(s,t)==0) putchar('=');
	else if(strcmp(s,t)>0) putchar('>');
	else putchar('<');
	putchar('\n');
	return 0;
}

