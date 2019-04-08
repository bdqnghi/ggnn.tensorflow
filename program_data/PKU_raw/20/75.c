int max(char str[]);

void main ()
{
	int i;

	for (;;)
	{
		int n,m;
		char x;
		char str[14],substr[4];
		if((x=getchar())==EOF) break;

		gets(str);
		n=strlen(str);
		for(i=0;i<3;i++)
		{
			substr[i]=str[n+i-3];
		}
		substr[3]='\0';
		str[n-3]='\0';
		for(i=n-4;i>0;i=i-1)
		{
			str[i]=str[i-1];
		}
		str[0]=x;

		m=max(str);		

		for(i=n+2;i>m+3;i=i-1)
		{
			str[i]=str[i-3];
		}
        str[n+3]='\0';
		str[m+1]=substr[0];
		str[m+2]=substr[1];
		str[m+3]=substr[2];
		puts(str);		
	}
}

int max(char str[])
{
	int len;
	int i;
	char c=str[0];
	len=strlen(str);

	for(i=1;i<len;i++)
	{
		if(c<str[i]) c=str[i];
	}

	for(i=0;i<len;i++)
	{
		if(str[i]==c) return i;
	}
	return 0;
}