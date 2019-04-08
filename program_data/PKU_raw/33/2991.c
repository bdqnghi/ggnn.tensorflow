int main()
{
	int n,i,x;
	char a[300];
	scanf("%d",&n);
        getchar();
	i=1;
	for(i=1;i<=n;i++)
	{
		scanf("%s", a);
                int l = strlen(a);
                a[l] = '\0';
        for(x=0;x<300;x++)
		{
		if(a[x]=='A')
		{a[x]='T';printf("%c",a[x]);}
		else if(a[x]=='T')
		{ a[x]='A';printf("%c",a[x]);}
		else if(a[x]=='G')
		{    a[x]='C';printf("%c",a[x]);}
		else if(a[x]=='C')
		{  a[x]='G';printf("%c",a[x]);}
		else
		{break;}
		}
	printf("\n");
	}
	return 0;
}