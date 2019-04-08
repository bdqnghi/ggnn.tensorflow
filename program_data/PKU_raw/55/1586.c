int change(char m);
char trans(int n);
int main()
{
	char f[10000];
	int g[10000];
	int a,b,i,len,s=0,t=0;
	scanf("%d %s %d",&a,f,&b);
	len=strlen(f);
	for(i=0;i<len;i++)
	{
		s=change(f[i])+s*a;
	}
	while(s/b)
	{
		g[t]=s%b;
		s/=b;
		t++;
	}
	g[t]=s%b;
	for(i=t;i>=0;i--)
	{
		printf("%c",trans(g[i]));
	}
	return 0;
}
int change(char m)
{
		int result;
		if((m-'0'>=0)&&(m-'0'<10))
		{
			result=m-'0';
		}
		else if((m-'a'>=0)&&(m-'a'<26))
		{
			result=m-'a'+10;
		}
		else if((m-'A'>=0)&&(m-'A'<26))
		{
			result=m-'A'+10;
		}
		return result;
}
char trans(int n)
{
	char last;
	if(n>=0||n<10)
	{
		last='0'+n;
	}
	if(n>9)
	{
		last='A'+n-10;
	}
	return last;
}
