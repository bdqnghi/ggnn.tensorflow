int main()
{
	char c[2000];
	int l,n;
	scanf("%d\n",&n);
	gets(c);
	char *p1=c,*p2,*pointer=c;
	l=strlen(c);
	c[l]=' ';
	for(p2=c;p2<=&c[l];p2++)
	{
		if(*p2==32) break;
	}
	for(p2=(p2+1);p2<=&c[l];p2++)
	{
		if(*p2==32)
		{
			if(p2-pointer>80)
			{
				printf("\n");
				pointer=(p1+1);
				p1=(p1+1);
			}
			for(p1=p1;p1<p2;p1++) printf("%c",*p1);
		}
	}
	return 0;
}