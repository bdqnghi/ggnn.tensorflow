int main ()
{
	int a,b,c,d;
	char g[80],h[80];
	gets(g);
	gets(h);
	for (c=0;g[c]!='\0';c++);
	for (b=0;g[b]!='\0';b++);
	for (a=0;a!='?'&&g[a]!='\0';a++)
	{
		if(g[a]>='A'&&g[a]<='Z')
		{
			g[a]=g[a]-'A'+'a';
		}
		if(g[a]<' ') g[a]=0;
		if(h[a]>='A'&&h[a]<='Z')
		{
			h[a]=h[a]-'A'+'a';
		}
		if (h[a]<' ') h[a]=0;
		if(g[a]>h[a])
		{
			printf(">");
			return 0;
		}
		if(g[a]<h[a])
		{
			printf("<");
			return 0;
		}
	}
	printf("=");
	return 0;
}
