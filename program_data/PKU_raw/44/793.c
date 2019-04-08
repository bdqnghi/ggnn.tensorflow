
int get(char c)
{
	if (c>='A'&&c<='Z') return c-'A'+10;
	else return c-'0';
}
void main()
{
	char s1[1000],s[1000],c='0';
	int i;
	while (c!=EOF)
	{	
		c=getchar();
		if (c==EOF) return;
		gets(s1);
		for (i=0;i<strlen(s1);i++)
			s[i]=s1[strlen(s1)-1-i];
		int l=0,r=strlen(s1);
		s[r]=c;
		if (s[strlen(s1)]=='-')
		{
			r--;
			printf("-");
		}
		while (s[l]=='0'&&r-l>0)
		{
			l++;
		}
		for (i=l;i<=r;i++)
			printf("%c",s[i]);
		printf("\n");
	}
}