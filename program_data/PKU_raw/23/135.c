char s[105];
void change(int a,int b)
{
	char m;
	int i;
	for(i=a;i<=(a+b)/2;i++)
	{
		m=s[i];
		s[i]=s[a+b-i];
		s[a+b-i]=m;
	}
}
void main()
{
	int i,len,a=0,b;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==' ')
		{
			b=i-1;
		    change(a,b);
			a=b+2;
		}
	}
	change(a,len-1);
	change(0,len-1);
	puts(s);
}			
