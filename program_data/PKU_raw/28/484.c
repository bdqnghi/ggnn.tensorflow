void main()
{
	char s[5000];
	gets(s);
	int a,b,c,d=0,e,s1[500];
	a=strlen(s);
	b=0;
	for(c=0;c<a;c++)
	{
		if(s[c]==' ')
		{s1[d]=b;d++;
		b=0;
		}
		else
		{b++;}
	}
	for(e=0;e<d;e++)
	{
		if(s1[e]!=0)
			printf("%d,",s1[e]);
	}
	printf("%d",b);
}
