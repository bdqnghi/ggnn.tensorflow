
void main()
{
	char s[30][20]={0};
	char a[101]={0}, b[101]={0};
	char ch, (*p)[20];
	int i=0;
	ch=0;
	while (ch!='\n')
	{
		scanf("%s",s[i++]);
	ch=getchar();
	}

	gets(a);
	gets(b);

	p=&s[0];
	while(strcmp(*p,"")!=0)
	{
		if (strcmp(*p,a)==0) printf("%s",b);
		else printf("%s", *p);
		p++;
		if (strcmp(*p,"")!=0) printf(" ");
	}

}