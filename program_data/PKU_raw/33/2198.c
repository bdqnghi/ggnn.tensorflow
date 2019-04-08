void main()
{
	char f(char x);
	int n, i, j;
	char s[256];
	scanf("%d\n", &n);
	for(i=0; i<n; i++)
	{
		gets(s);
		for(j=0; s[j]!='\0'; j++)
			s[j]=f(s[j]);
		s[j]='\0';
		puts(s);
	}
}
char f(char x)
{
	switch(x)
	{
	case 'A': return 'T'; break;
	case 'T': return 'A'; break;
	case 'C': return 'G'; break;
	case 'G': return 'C'; break;
	}
}